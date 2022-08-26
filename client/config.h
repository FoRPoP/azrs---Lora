#ifndef CONFIG_H
#define CONFIG_H

#pragma once
#include <QDir>
#include <QFile>
#include <QList>
#include <QObject>
#include <QString>
#include <QTextStream>
#include <QTranslator>

#include "config.h"
#include "deck.h"
#include "define.h"

// const int CONFIG_AUTO_CENTERING          = 0;
const int CONFIG_INFO_CHANNEL = 0;
const int CONFIG_LANGUAGE = 1;
const int CONFIG_USERNAME = 2;
const int CONFIG_PASSWORD = 3;
const int CONFIG_WARNING = 4;


class Config : public QObject
{
 public:
  Config();
  ~Config();

 private:
  void initVars();
  int saveConfigFile();
  int loadConfigFile();

  int language;


  // settings
  //    bool autoCentering;

  bool infoChannel;


  // online
  QString username;
  QString password;
  bool warning;
  QList<QString> usernames;

 public:
  QString& Username();
  QString& Password();
  bool Warning();

  void setOnline(QString u, QString p);
  int setConfigFile(int param, bool enable);
  int setLanguage(int lang);
  int getLanguage();
  void addUsername();
  QList<QString> getUsernames();
  void loadUsernames();
  //    bool isAutoCentering();
  bool isInfoChannel();
  bool isSaveGame();
};

#endif  // CONFIG_H
