#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#pragma once

#include <string.h>
#include <QDialogButtonBox>
#include <QDir>
#include <QFile>
#include <QFlags>
#include <QImage>
#include <QLCDNumber>
#include <QLabel>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include <QRadioButton>
#include <QResource>
#include <QString>
#include <QTime>
#include <QTimer>
#include <QTranslator>

class Player;
class Game;
class TcpClient;
class Config;
class Deck;
class Talon;
// class Stats;

#include "assert.h"
#include "config.h"
#include "help.h"
//#include "stats.h"
#include "Game.h"
#include "deck.h"
#include "define.h"
#include "player.h"
#include "talon.h"
#include "tcpclient.h"


const int maxMainwindowHeight = 1000;
// const int DECK_SIZE           = 32;

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

 public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

  void initializeGraphics();
  void setInfoChannel();
  void clearDeck();

  void setCardsDisabled();
  void setLanguage(int lang);
  //    QString getMessage();
  bool isCardDisabled(Card* card);
  void showDeck();
  void addCardToTable(Card* card, Player* plr);
  void refreshTable();
  void showYourTurn();
  void isMyTurn(Player* plr);
  Talon* getTalon();

 private slots:
  void on_labelKartaURuci1_clicked();
  void on_labelKartaURuci2_clicked();
  void on_labelKartaURuci3_clicked();
  void on_labelKartaURuci4_clicked();
  void on_labelKartaURuci5_clicked();
  void on_labelKartaURuci6_clicked();
  void on_labelKartaURuci7_clicked();
  void on_labelKartaURuci8_clicked();
  void on_actionNew_triggered();
  void on_actionConnect_triggered();
  void on_actionRules_triggered();
  void on_actionReset_triggered();
  void on_actionShow_triggered();
  void on_actionEnglish_triggered();
  void on_actionSrpski_triggered();
  void on_lineEdit_returnPressed();
  void on_pushButton_6_clicked();

  //    void on_labelKartaNaTalonuDole_clicked();
  //    void on_labelKartaNaTalonuLevo_clicked();
  //    void on_labelKartaNaTalonuGore_clicked();
  //    void on_labelKartaNaTalonuDesno_clicked();
  ////    void on_actionTables_triggered();


 private:
  Ui::MainWindow* ui;
  QWidget* parent;
  QImage* imageEmptyCard;
  QImage* imageYourTurn;
  QImage* imageSitHere;
  QLabel* labels[18];
  QLCDNumber* lcdScore[4];
  QTranslator translator;


  Config* config;
  //    Stats* stats;
  Help* help;
  Player* player;
  Game* lora;
  Deck* deck;
  Talon* talon;
  TcpClient* client;
  int index;

  QTimer* timer;

  int cardHeight;
  int defCardPosY;

  QString inputText;


 public slots:
  void message(QString mesg);
  void clearTable();

 public:
  // signals:
  //    void joinGame(int id, char chair);
  //    void sigRefreshDeck(Player* plr/*, bool d*/);
  //    void sigScore(int score, int idx);
  void yourTurn(Player* plr);
  void gameOver();
  void refreshScore(int i);
  void refreshMainWindow();
};
#endif  // MAIN_WINDOW_H
