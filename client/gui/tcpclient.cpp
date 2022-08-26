#include "tcpclient.h"


TcpClient::TcpClient(QWidget* parent)
    : QWidget(parent), ui(new Ui::TcpClient), m_socket(new QTcpSocket(this))
{
  ui->setupUi(this);

  ui->address->setText(QHostAddress(QHostAddress::LocalHost).toString());
  ui->port->setValue(52693);

  connect(m_socket, &QTcpSocket::readyRead, this, &TcpClient::readMessage);
  connect(m_socket, &QTcpSocket::connected, this,
          &TcpClient::connectedToServer);
  connect(m_socket, &QTcpSocket::disconnected, this,
          &TcpClient::disconnectedByServer);

  connect(this, &TcpClient::connection, this, &TcpClient::sendMessage);
  connect(this, &TcpClient::start, this, &TcpClient::sendMessage);
  connect(this, &TcpClient::notReady, this, []() {
    QMessageBox::information(nullptr, tr("Warning: Players not ready!"),
                             tr("Wait for the other players to check in!"));
  });

  connect(this, &TcpClient::showFullMessage, this, []() {
    QMessageBox::information(nullptr, tr("Full lobby"),
                             tr("The lobby is full!"));
  });
}

TcpClient::~TcpClient()
{
  delete ui;
}

void TcpClient::sendMessage(QString text)
{
  if ( text.isEmpty() || m_socket->state() != QAbstractSocket::ConnectedState )
    return;

  QDataStream socketStream(m_socket);
  socketStream.setVersion(QDataStream::Qt_5_12);

  QByteArray byteArray = text.toUtf8();

  socketStream << byteArray;
}

void TcpClient::readMessage()
{
  while ( m_socket->bytesAvailable() < quint64(sizeof(quint32)) )
  {
    if ( !m_socket->waitForReadyRead() )
      return;
  }

  QDataStream stream(m_socket);
  quint32 msgSize = 0;
  stream >> msgSize;

  int length = qint64(msgSize - sizeof(quint32));
  while ( m_socket->bytesAvailable() < length )
  {
    if ( !m_socket->waitForReadyRead() )
      return;
  }

  QByteArray buffer;
  buffer.resize(length - sizeof(quint32));
  stream.skipRawData(sizeof(quint32));
  stream.readRawData(buffer.data(), length - sizeof(quint32));

  auto mess = QString::fromUtf8(buffer);
  qDebug() << mess;
  parseMessages(mess, m_socket);
}

void TcpClient::on_connect_clicked()
{
  if ( m_socket->state() != QAbstractSocket::ConnectedState )
  {
    std::cout << "Connecting!" << std::endl;
    updateGui(QAbstractSocket::ConnectingState);
  }
}

void TcpClient::connectedToServer()
{
  std::cout << "Connected to Server!" << std::endl;
  emit connection("\CONNECT");
}

void TcpClient::on_disconnect_clicked()
{
  if ( m_socket->state() != QAbstractSocket::ConnectingState )
    std::cout << "Abort Connecting!" << std::endl;

  m_socket->abort();
  updateGui(QAbstractSocket::UnconnectedState);
}

void TcpClient::disconnectedByServer()
{
  std::cout << "Disconnected by Server!" << std::endl;
  updateGui(QAbstractSocket::UnconnectedState);
}

void TcpClient::updateGui(QAbstractSocket::SocketState state)
{
  const bool unconnected = (state == QAbstractSocket::UnconnectedState);
  ui->connect->setEnabled(unconnected);
  ui->address->setEnabled(unconnected);
  ui->port->setEnabled(unconnected);

  ui->disconnect->setEnabled(!unconnected);
}

void TcpClient::parseMessages(QString msg, QTcpSocket* con)
{
  auto split_msg = msg.split(' ');
  auto command = split_msg[0];

  if ( command == "/NEWCONN" )
  {
    m_clientNumber = split_msg[1];
    sendMessage("/START");
  }

  if ( command == "/FULL" )
  {
    // message box - full players
  }

  if ( command == "/BADNUMOFPLAYERS" )
  {
    // message box - bad num of players - can't start
  }

  if ( command == "/NOTREADY" )
  {
    // message box - someone isn't ready
  }

  if ( command == "/STARTGAME" )
  {
    // startGame
    Game* game = new Game();
    Player* clientPlayer = new Player(m_clientNumber);
    game->addPlayer(clientPlayer);

    game->play(con);
  }
}
