#include "stats.h"
#include <QTableWidgetItem>
Stats::Stats(QWidget *parent, QString usrnm) :
   QWidget(parent),
   ui(new Ui::Stats)
{
  ui->setupUi(this);

  setWindowTitle(tr("Game Statistics"));

  setAttribute( Qt::WA_QuitOnClose, false );
  usernames.push_front(usrnm);
  numOfPlayers = usernames.size();
  initVars();

  QFile file(QDir::homePath() + STATS_FILENAME);

  fileCorrupted = false;
  if (!file.exists())
    saveStatsFile();                         // create the file by saving the default values.
  else {
    if (loadStatsFile() == FCORRUPTED)
      fileCorrupted = true;
  }

  ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

  createWindow();

  file.close();

}

Stats::~Stats()
{
  delete ui;
}

void Stats::initVars()
{
  gameStarted = 1;
  gameFinished = 0;
  loadUsernames();

//  QList<QTableWidgetItem*> item_names;
//  QList<QTableWidgetItem*> item_firstPlace[numOfPlayers];
//  QList<QTableWidgetItem*> item_secondPlace[numOfPlayers];
//  QList<QTableWidgetItem*> item_thirdPlace[numOfPlayers];
//  QList<QTableWidgetItem*> item_fourthPlace[numOfPlayers];
//  QList<QTableWidgetItem*> item_avgScore[numOfPlayers];
//  QList<QTableWidgetItem*> item_bestScore[numOfPlayers];
//  QList<QTableWidgetItem*> item_worstScore[numOfPlayers];



  numOfPlayers = usernames.size();
  for (int i=0; i<numOfPlayers; i++) {

    firstPlace.append(0);
    secondPlace.append(0);
    thirdPlace.append(0);
    fourthPlace.append(0);

    totalScore.append(0);
    bestScore.append(0);
    worstScore.append(0);

  }

}

int Stats::saveStatsFile()
{
  QFile file(QDir::homePath() + STATS_FILENAME);

  if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
    return ERROPENWO;
  }

  QTextStream out(&file);

  out << gameStarted << " " << gameFinished << '\n';

  for (int i=0; i<numOfPlayers; i++) {
     out << firstPlace[i]           << " " << secondPlace[i]        << " " <<
            thirdPlace[i]           << " " << fourthPlace[i]        << " " <<
            totalScore[i]           << " " << bestScore[i]          << " " <<
            worstScore[i]           << '\n';
  }

  file.close();

  return FNOERR;
}

int Stats::loadStatsFile()
{
  QFile file(QDir::homePath() + STATS_FILENAME);

  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    return ERROPENRO;
  }

  int value;
  QString line = file.readLine();

  value = line.section(' ', 0, 0).toInt();
  if (value < 1) {
    file.rename(QDir::homePath() + STATS_BACKUP_FILE);             // rename also close the file
    return FCORRUPTED;
  }
  gameStarted = value;

  value = line.section(' ', 1, 1).toInt();
  if (value < 0) {
    file.rename(QDir::homePath() + STATS_BACKUP_FILE);
    return FCORRUPTED;
  }
  gameFinished = value;


  int cpt = 0;

  while (!file.atEnd()) {
    line = file.readLine();

    for (int i=0; i<7; i++) {
       value = line.section(' ', i, i).toInt();

       if ((value < 0) && (i != 5) && (i != 6)) {
         file.rename(QDir::homePath() + STATS_BACKUP_FILE);
         return FCORRUPTED;
       }
       if(cpt >= numOfPlayers){

           firstPlace.append(0);
           secondPlace.append(0);
           thirdPlace.append(0);
           fourthPlace.append(0);

           totalScore.append(0);
           bestScore.append(0);
           worstScore.append(0);
           numOfPlayers = cpt;
       }
       switch (i) {
          case 0 : firstPlace[cpt] = value; break;
          case 1 : secondPlace[cpt] = value; break;
          case 2 : thirdPlace[cpt] = value; break;
          case 3 : fourthPlace[cpt] = value; break;
          case 4 : totalScore[cpt] = value; break;
          case 5 : bestScore[cpt] = value; break;
          case 6 : worstScore[cpt] = value; break;

       }
    }
    cpt++;
  }

 file.close();
 return FNOERR;
}
void Stats::updateWindow(int plr, int stats)
{


 double total = firstPlace[plr] + secondPlace[plr] + thirdPlace[plr] + fourthPlace[plr];

 if (!static_cast<bool>(total))
   total = 1;                // avoid division by 0

 double started = gameStarted;

 if (!static_cast<bool>(started))
   started = 1;

 int value;

 switch (stats) {
   case STATS_SCORES :      if (bestScore[plr] != -1) {
                               item_bestScore[plr]->setData(Qt::EditRole, bestScore[plr]);
                               item_avgScore[plr]->setData(Qt::EditRole, totalScore[plr] / total);
                             }

                             if (worstScore[plr] != -1)
                               item_worstScore[plr]->setData(Qt::EditRole, worstScore[plr]);
                             break;
   case STATS_GAME_STARTED : ui->label_4->setText(QString::number(gameStarted));
   case STATS_GAME_FINISHED :ui->label_5->setText(QString::number(gameFinished) + " (" + QString::number(double(gameFinished * 100 / started), 'f', 1) + QString("%)") );
                             break;

   case STATS_FIRST_PLACE:
   case STATS_SECOND_PLACE :
   case STATS_THIRD_PLACE :
   case STATS_FOURTH_PLACE :
                             value = firstPlace[plr];
                             item_firstPlace[plr]->setText(QString::number(value) + " (" +
                                                            QString::number(double(value * 100 / total), 'f', 1) + "%)");
                             value = secondPlace[plr];
                             item_secondPlace[plr]->setText(QString::number(value) + " (" +
                                                            QString::number(double(value * 100 / total), 'f', 1) + "%)");
                             value = thirdPlace[plr];
                             item_thirdPlace[plr]->setText(QString::number(value) + " (" +
                                                            QString::number(double(value * 100 / total), 'f', 1) + "%)");
                             value = fourthPlace[plr];
                             item_fourthPlace[plr]->setText(QString::number(value) + " (" +
                                                             QString::number(double(value * 100 / total), 'f', 1) + "%)");
                             break;

  }
}

void Stats::increaseStats(QString usrnm, int stats)
{
  int plr = usernames.indexOf(usrnm);
  if(plr==-1){
      usernames.push_front(usrnm);

      firstPlace.push_front(0);
      secondPlace.push_front(0);
      thirdPlace.push_front(0);
      fourthPlace.push_front(0);

      totalScore.push_front(0);
      bestScore.push_front(0);
      worstScore.push_front(0);
      plr = 0;

  }

  switch (stats) {
     case STATS_GAME_STARTED:  gameStarted++; break;
     case STATS_GAME_FINISHED: gameFinished++; break;
     case STATS_FIRST_PLACE:   firstPlace[plr]++; break;
     case STATS_SECOND_PLACE:  secondPlace[plr]++; break;
     case STATS_THIRD_PLACE:   thirdPlace[plr]++; break;
     case STATS_FOURTH_PLACE:  fourthPlace[plr]++; break;

  }

  updateWindow(plr, stats);
}

void Stats::setScore(QString usrnm, int score)
{
    int plr = usernames.indexOf(usrnm);
    if(plr==-1){
        usernames.push_front(usrnm);

        firstPlace.push_front(0);
        secondPlace.push_front(0);
        thirdPlace.push_front(0);
        fourthPlace.push_front(0);

        totalScore.push_front(0);
        bestScore.push_front(0);
        worstScore.push_front(0);
        plr = 0;

    }
  totalScore[plr] += score;

  if ((bestScore[plr] == -1) || (score < bestScore[plr]))
    bestScore[plr] = score;

  if ((worstScore[plr] == -1) || (score > worstScore[plr]))
    worstScore[plr] = score;

  updateWindow(plr, STATS_SCORES);
}

void Stats::reset()
{
 initVars();

 updateWindow(0, STATS_GAME_STARTED);

 for (int i=0; i<numOfPlayers; i++) {
   updateWindow(i, STATS_SCORES);
   updateWindow(i, STATS_FIRST_PLACE);
   updateWindow(i, STATS_SECOND_PLACE);
   updateWindow(i, STATS_THIRD_PLACE);
   updateWindow(i, STATS_FOURTH_PLACE);
 }

 saveStatsFile();
}

void Stats::createWindow()
{
//  QColor color1(78, 199, 102);
//  QColor color2(94, 239, 123);
  if(numOfPlayers == 0){
      return;
  }
  for (int i=0; i<numOfPlayers; i++) {
     item_names.append(new QTableWidgetItem(QString(usernames[i])));
     item_names[i]->setFlags(item_names[i]->flags() & ~Qt::ItemIsEditable);
//     item_names[i]->setBackgroundColour(color1);
     ui->tableWidget->setItem(i, 0, item_names[i]);

     double total = firstPlace[i] + secondPlace[i] + thirdPlace[i] + fourthPlace[i];

     if (!static_cast<bool>(total))
       total = 1;

     for (int i2=0; i2<4; i2++) {
       int value;

       switch (i2) {
         case 0 : value = firstPlace[i];
                  item_firstPlace[i] = new QTableWidgetItem(QString::number(value) + " (" +
                                                             QString::number(double(value * 100 / total), 'f', 1) + "%)");
                  item_firstPlace[i]->setFlags(item_firstPlace[i]->flags() & ~Qt::ItemIsEditable);
//                  item_firstPlace[i]->setBackgroundColor(color2);
                  ui->tableWidget->setItem(i, 1, item_firstPlace[i]);
                  break;
         case 1 : value = secondPlace[i];
                  item_secondPlace.append( new QTableWidgetItem(QString::number(value) + " (" +
                                                              QString::number((value * 100 / total), 'f', 1) + "%)"));
                  item_secondPlace[i]->setFlags(item_secondPlace[i]->flags() & ~Qt::ItemIsEditable);
//                  item_secondPlace[i]->setBackgroundColor(color1);
                  ui->tableWidget->setItem(i, 2, item_secondPlace[i]);
                  break;
         case 2 : value = thirdPlace[i];
                  item_thirdPlace.append(new QTableWidgetItem(QString::number(value) + " (" +
                                                             QString::number(double(value * 100 / total), 'f', 1) + "%)"));
                  item_thirdPlace[i]->setFlags(item_thirdPlace[i]->flags() & ~Qt::ItemIsEditable);
//                  item_thirdPlace[i]->setBackgroundColor(color2);
                  ui->tableWidget->setItem(i, 3, item_thirdPlace[i]);
                  break;
         case 3 : value = fourthPlace[i];
                  item_fourthPlace.append(new QTableWidgetItem(QString::number(value) + " (" +
                                                              QString::number(double(value * 100 / total), 'f', 1) + "%)"));
                  item_fourthPlace[i]->setFlags(item_fourthPlace[i]->flags() & ~Qt::ItemIsEditable);
//                  item_fourthPlace[i]->setBackgroundColor(color1);
                  ui->tableWidget->setItem(i, 4, item_fourthPlace[i]);
                  break;
       }
     }

     item_bestScore.append(new QTableWidgetItem);
     item_avgScore.append(new QTableWidgetItem);

     if (bestScore[i] != -1) {
       item_bestScore[i]->setData(Qt::EditRole, bestScore[i]);
       item_avgScore[i]->setData(Qt::EditRole, totalScore[i] / total);
     }

     item_worstScore.append(new QTableWidgetItem);
     if (worstScore[i] != -1) {
       item_worstScore[i]->setData(Qt::EditRole, worstScore[i]);
     }


     item_avgScore[i]->setFlags(item_avgScore[i]->flags() & ~Qt::ItemIsEditable);
     item_bestScore[i]->setFlags(item_bestScore[i]->flags() & ~Qt::ItemIsEditable);
     item_worstScore[i]->setFlags(item_worstScore[i]->flags() & ~Qt::ItemIsEditable);


//     item_avgScore[i]->setBackgroundColor(color2);
//     item_bestScore[i]->setBackgroundColor(color1);
//     item_worstScore[i]->setBackgroundColor(color2);

     ui->tableWidget->setItem(i, 5, item_avgScore[i]);
     ui->tableWidget->setItem(i, 6, item_bestScore[i]);
     ui->tableWidget->setItem(i, 7, item_worstScore[i]);
  }

  ui->tableWidget->setSortingEnabled(true);

  updateWindow(0, STATS_GAME_STARTED);
}

bool Stats::isFileCorrupted()
{
  return fileCorrupted;
}

void Stats::Translate()
{
  ui->retranslateUi(this);
}

void Stats::loadUsernames(){
    Config* config = new Config();

    usernames = config->getUsernames();

    delete config;
}
