#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QAbstractSocket>
#include <QMessageBox>
#include <QSignalSpy>
#include <QTest>
#include <QWidget>
#include <QtGlobal>
#include <algorithm>

namespace Ui
{
class TcpServer;
}

class QTcpServer;
class QTcpSocket;

class TcpServer : public QWidget
{
  Q_OBJECT

 public:
  explicit TcpServer(QWidget* parent = 0);
  ~TcpServer();
 signals:
  void attemptConnection(QTcpSocket* con);
  void attemptStartGame(QTcpSocket* con);
  void deckPerm(QTcpSocket* con);
  void playersPerm(QTcpSocket* con);
  void playedCard(QString playedCardMessage);

 private slots:
  void newConnection();
  void removeConnection();
  void newMessage();
  void displayError(QAbstractSocket::SocketError);
  void on_disconnectClients_clicked();

 private:
  Ui::TcpServer* ui;
  QTcpServer* m_server;
  bool allReady = false;
  bool wantToStart = false;
  bool deckPermMade = false;
  bool playersPermMade = false;
  QVector<QString> deckPermMessages;
  QString allDeckPerms;
  QString playersPermMessage;

  enum class ClientType
  {
    ADMIN,
    CLIENT,
    CHECKEDCLIENT
  };

  QHash<QTcpSocket*, ClientType> m_clients;

  void parseMessage(QString, QTcpSocket*);
  void sendMessage(QTcpSocket*, QString);
};

#endif  // TCPSERVER_H
