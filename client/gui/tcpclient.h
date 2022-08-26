#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QAbstractSocket>
#include <QMessageBox>
#include <QWidget>
#include <QtNetwork>
#include <iostream>

#include "../Game.h"
#include "ui_mainwindow.h"
#include "ui_tcpclient.h"


class QTcpSocket;

namespace Ui
{
class TcpClient;
}

class TcpClient : public QWidget
{
  Q_OBJECT

 public:
  explicit TcpClient(QWidget* parent = 0);
  ~TcpClient();
 public slots:
  void sendMessage(QString);

 private slots:
  void readMessage();
  void on_connect_clicked();
  void connectedToServer();
  void on_disconnect_clicked();
  void disconnectedByServer();

 signals:
  void connection(QString);
  void start(QString);
  void notReady();
  void showFullMessage();

 private:
  Ui::TcpClient* ui;
  QTcpSocket* m_socket;
  QString m_user;
  QString m_receivedData;
  QString m_clientNumber;

  void parseMessages(QString, QTcpSocket*);
  void updateGui(QAbstractSocket::SocketState state);
};

#endif
