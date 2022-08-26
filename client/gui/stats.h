#ifndef STATS_H
#define STATS_H
#pragma once
#include <QWidget>
#include <QTableWidgetItem>
#include <QString>
#include <QList>
#include <QFile>
#include <QDir>
#include <QTextStream>

#include "define.h"
#include "ui_stats.h"
#include "config.h"


#define STATS_FILENAME  "/.lora.stats"
#define STATS_BACKUP_FILE  "/.lora.stats.bak"

const int STATS_GAME_STARTED  = 0;
const int STATS_GAME_FINISHED = 1;
const int STATS_HANDS_PLAYED  = 2;
const int STATS_SCORES        = 3;
const int STATS_FIRST_PLACE   = 4;
const int STATS_SECOND_PLACE  = 5;
const int STATS_THIRD_PLACE   = 6;
const int STATS_FOURTH_PLACE  = 7;

namespace Ui { class Stats; }

class Stats : public QWidget
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = nullptr, QString usrnm = "You");
    ~Stats();

private:
    Ui::Stats *ui;
    bool fileCorrupted;
    QList<QString> usernames;
    QList<QTableWidgetItem*> item_names;
    QList<QTableWidgetItem*> item_firstPlace;
    QList<QTableWidgetItem*> item_secondPlace;
    QList<QTableWidgetItem*> item_thirdPlace;
    QList<QTableWidgetItem*> item_fourthPlace;
    QList<QTableWidgetItem*> item_avgScore;
    QList<QTableWidgetItem*> item_bestScore;
    QList<QTableWidgetItem*> item_worstScore;

    int gameStarted;
    int gameFinished;
    int handsPlayed;

    QList<int> firstPlace;
    QList<int> secondPlace;
    QList<int> thirdPlace;
    QList<int> fourthPlace;

    QList<int> totalScore;
    QList<int> bestScore;
    QList<int> worstScore;
    int numOfPlayers;

private: // functions
    void initVars();
    void createWindow();
    void updateWindow(int plr, int stats);

public: // functions
    bool isFileCorrupted();
    void loadUsernames();
    int  loadStatsFile();
    int  saveStatsFile();

    void increaseStats(QString usrnm, int stats);
    void setScore(QString usrnm, int score);
    void reset();
    void showStats();
    void Translate();
};

#endif // STATS_H
