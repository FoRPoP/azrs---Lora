#include "tcpserver.h"
#include "ui_tcpserver.h"

#include <QPlainTextEdit>
#include <QtNetwork>
#include <QtWidgets>
#include <iostream>
#include <vector>

TcpServer::TcpServer(QWidget* parent)
    : QWidget(parent), ui(new Ui::TcpServer), m_server(new QTcpServer(this))
{
  ui->setupUi(this);

  if ( !m_server->listen(QHostAddress::LocalHost, 40000) )
  {
    ui->log->setPlainText("Failure while starting server: " +
                          m_server->errorString());
    return;
  }


  connect(m_server, &QTcpServer::newConnection, this,
          &TcpServer::newConnection);
  connect(this, &TcpServer::attemptConnection, this, [this](QTcpSocket* con) {
    QString msg = QString("/NEWCONN %1").arg(m_clients.size());
    if ( m_clients.size() == 4 )
      msg = "/FULL";

    sendMessage(con, msg);
  });

  connect(this, &TcpServer::attemptStartGame, this, [this](QTcpSocket* con) {
    if ( m_clients[con] != ClientType::ADMIN )
    {
      m_clients[con] = ClientType::CHECKEDCLIENT;
      int i = 1;
      if ( !wantToStart )
        i = 0;
      foreach (ClientType ct, m_clients)
      {
        if ( ct == ClientType::CLIENT )
          break;
        i++;
      }
      if ( m_clients.size() == i )
        allReady = true;
    }
    else if ( m_clients.size() != 4 )
      sendMessage(con, "/BADNUMOFPLAYERS");
    else
      wantToStart = true;

    foreach (ClientType ct, m_clients)
    {
      if ( ct == ClientType::CLIENT )
      {
        sendMessage(con, "/NOTREADY");
        break;
      }
    }

    if ( wantToStart && allReady )
    {
      foreach (QTcpSocket* con, m_clients.keys())
      {
        sendMessage(con, "/STARTGAME");
      }
    }
  });

  connect(this, &TcpServer::deckPerm, this, [this](QTcpSocket* con) {
    if ( !deckPermMade )
    {
      for ( unsigned int counter = 0; counter < 32; counter++ )
      {
        QVector<int> dPerm;
        for ( unsigned int i = 0; i < 32; i++ )
          dPerm.append(i);
        std::random_shuffle(dPerm.begin(), dPerm.end());

        QString message;
        foreach (int i, dPerm)
        {
          message.append(QString::number(i));
          message.append(' ');
        }
        deckPermMessages.append(message);
        allDeckPerms.append(message);
        allDeckPerms.append('.');
      }
      deckPermMade = true;
    }

    sendMessage(con, allDeckPerms);
  });

  connect(this, &TcpServer::playersPerm, this, [this](QTcpSocket* con) {
    if ( !playersPermMade )
    {
      QVector<int> pPerm;
      for ( unsigned int i = 0; i < 4; i++ )
        pPerm.append(i);
      std::random_shuffle(pPerm.begin(), pPerm.end());

      foreach (int i, pPerm)
      {
        playersPermMessage.append(QString::number(i));
        playersPermMessage.append(' ');
      }
      playersPermMade = true;
    }

    sendMessage(con, playersPermMessage);
  });

  connect(this, &TcpServer::playedCard, this,
          [this](QString playedCardMessage) {
            auto split_msg = playedCardMessage.split(' ');
            foreach (QTcpSocket* clientCon, m_clients.keys())
            {
              sendMessage(clientCon, split_msg[1]);
            }
          });

  ui->address->setText(m_server->serverAddress().toString());
  ui->port->setText(QString::number(m_server->serverPort()));
}

TcpServer::~TcpServer()
{
  delete ui;
}

void TcpServer::newConnection()
{
  while ( m_server->hasPendingConnections() )
  {
    QTcpSocket* con = m_server->nextPendingConnection();

    if ( m_clients.size() == 0 )
      m_clients[con] = ClientType::ADMIN;
    else
      m_clients[con] = ClientType::CLIENT;

    ui->disconnectClients->setEnabled(true);

    connect(con, &QTcpSocket::disconnected, this, &TcpServer::removeConnection);
    connect(con, &QTcpSocket::readyRead, this, &TcpServer::newMessage);

    ui->log->insertPlainText(QString("* New Connection: %1, port %2\n")
                                 .arg(con->peerAddress().toString(),
                                      QString::number(con->peerPort())));
  }
}

void TcpServer::removeConnection()
{
  if ( QTcpSocket* con = qobject_cast<QTcpSocket*>(sender()) )
  {
    ui->log->insertPlainText(QString("* Connection removed: %1, port %2\n")
                                 .arg(con->peerAddress().toString(),
                                      QString::number(con->peerPort())));

    if ( m_clients[con] == ClientType::ADMIN && m_clients.size() > 1 )
    {
      m_clients.remove(con);
      auto it = m_clients.begin();
      m_clients[it.key()] = ClientType::ADMIN;
    }
    else
    {
      m_clients.remove(con);
    }

    con->deleteLater();
    ui->disconnectClients->setEnabled(!m_clients.isEmpty());
  }
}

void TcpServer::newMessage()
{
  if ( QTcpSocket* con = qobject_cast<QTcpSocket*>(sender()) )
  {
    QByteArray buffer;

    QDataStream socketStream(con);
    socketStream.setVersion(QDataStream::Qt_5_12);

    socketStream.startTransaction();
    socketStream >> buffer;

    if ( !socketStream.commitTransaction() )
    {
      return;
    }

    QString message =
        QString("%1").arg(QString::fromStdString(buffer.toStdString()));
    ui->log->insertPlainText("Sending message: " + message + "\n");
    parseMessage(message, con);
  }
}

void TcpServer::on_disconnectClients_clicked()
{
  foreach (QTcpSocket* socket, m_clients.keys())
    socket->close();

  ui->disconnectClients->setEnabled(false);
}

void TcpServer::parseMessage(QString message, QTcpSocket* con)
{
  auto split_msg = message.split(' ');
  auto command = split_msg[0];

  if ( command == "/CONNECT" )
    emit attemptConnection(con);

  if ( command == "/START" )
    emit attemptStartGame(con);

  if ( command == "/DECK" )
    emit deckPerm(con);

  if ( command == "/PLAYERS" )
    emit playersPerm(con);

  if ( command == "/CARD" )
    emit playedCard(message);
}

void TcpServer::sendMessage(QTcpSocket* con, QString msg)
{
  QByteArray data;
  QDataStream stream(&data, QIODevice::WriteOnly);

  stream << (quint32)0;
  stream << msg.toUtf8();
  stream.device()->seek(0);
  stream << (quint32)data.size();

  con->write(data);
}

void TcpServer::displayError(QAbstractSocket::SocketError socketError)
{
  switch ( socketError )
  {
    case QAbstractSocket::RemoteHostClosedError:
      break;
    case QAbstractSocket::HostNotFoundError:
      QMessageBox::information(this, "QTCPServer",
                               "The host was not found. Please check the host "
                               "name and port settings.");
      break;
    case QAbstractSocket::ConnectionRefusedError:
      QMessageBox::information(this, "QTCPServer",
                               "The connection was refused by the peer. Make "
                               "sure QTCPServer is running, and check that the "
                               "host name and port settings are correct.");
      break;
    default:
      QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
      QMessageBox::information(this, "QTCPServer",
                               QString("The following error occurred: %1.")
                                   .arg(socket->errorString()));
      break;
  }
}
