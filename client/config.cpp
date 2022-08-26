#include "config.h"
Config::Config()
{
 initVars();

 QFile file(QDir::homePath() + CONFIG_FILENAME);

 if (!file.exists())
   saveConfigFile();      // create the file by saving the default values.
 else
   loadConfigFile();
}

Config::~Config()
{
}

void Config::initVars()
{
//  autoCentering = true;
  infoChannel = true;

  username = "";
  password = "";
  warning = true;

  language = LANG_ENGLISH;
}

int Config::loadConfigFile() {
  QFile file(QDir::homePath() + CONFIG_FILENAME);

  int cpt = 0;

  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    return ERROPENRO;
  }

  while (!file.atEnd()) {
      cpt++;
      QString line = file.readLine();
      QString param = line.section(" ", 0, 0);
      QString value = line.section(" ", -1, -1).simplified();

      if (param == "Language") {
        if (value == "english")
          language = LANG_ENGLISH;

        else
        if(value == "serbian")
            language = LANG_SERBIAN;
        continue;
      }



      if (param == "Username") {
        username  = value;
        continue;
      }

      if (param == "Password") {
        password = value;
        continue;
      }

      bool enable;

      if (value == "true")
        enable = true;
      else
        enable = false;

//      if (param == "Auto_Centering")
//        autoCentering = enable;

//      else
      if (param == "Info_Channel")
        infoChannel = enable;
      else

      if (param == "Warning")
        warning = enable;
      else {
          // unknown param
      }

  }
  file.close();

  return FNOERR;
}

int Config::setLanguage(int lang) {
  language = lang;

  return saveConfigFile();
}

int Config::setConfigFile(int param, bool enable)
{
  switch (param) {
//    case CONFIG_AUTO_CENTERING :          autoCentering = enable; break;
    case CONFIG_INFO_CHANNEL :            infoChannel = enable; break;
    case CONFIG_WARNING :                 warning = enable; break;
  }

  return saveConfigFile();
}

int Config::saveConfigFile()
{
  QFile file(QDir::homePath() + CONFIG_FILENAME);

  if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
     return ERROPENWO;
  }

  QTextStream out(&file);

  if (username.size() && password.size()) {
    out << "Username = " << username << '\n';
    out << "Password = " << password << '\n';
    out << "Warning = " << (warning ? "true" : "false") << '\n';
  }

  switch (language) {
    case LANG_ENGLISH: out << "Language = english" << '\n'; break;
    case LANG_SERBIAN: out << "Language = serbian" << '\n'; break;
  }


//  out << "Auto_Centering = " << (autoCentering ? "true" : "false") << '\n';
  out << "Info_Channel = " << (infoChannel ? "true" : "false") << '\n';

  file.close();
  return FNOERR;
}

void Config::setOnline(QString u, QString p)
{
  username = u;
  password = p;

  saveConfigFile();
}

QString &Config::Username()
{
  return username;
}

QString &Config::Password()
{
  return password;
}

bool Config::Warning()
{
  return warning;
}

//bool Config::isAutoCentering() {
//  return autoCentering;
//}

void Config::addUsername(){
    QFile file(QDir::homePath() + USERNAMES_FILENAME);
    QTextStream out(&file);
    out << username << '\n';
    file.close();
}

void Config::loadUsernames(){
    QFile file(QDir::homePath() + USERNAMES_FILENAME);



    while (!file.atEnd()) {
        QString usrnm = file.readLine();
        if(usernames.indexOf(usrnm) == -1)
            usernames.push_back(usrnm);
    }
}

QList<QString> Config::getUsernames(){
    return usernames;
}

bool Config::isInfoChannel() {
  return infoChannel;
}
int Config::getLanguage() {
  return language;
}

