#include "mainwindow.h"


bool MainWindow::isCardDisabled(Card* card)
{
  return lora->isCardSelectable(player, card);
}

void MainWindow::on_pushButton_6_clicked()
{
  inputText = ui->lineEdit->text();
}

void MainWindow::on_actionNew_triggered()
{
  player = new Player("You");

  lora->addPlayer(player);

  lora->addPlayer(new Player("Opponent 1"));
  lora->addPlayer(new Player("Opponent 2"));
  lora->addPlayer(new Player("Opponent 3"));

  lora->play();
}

void MainWindow::on_actionConnect_triggered()
{
  //    //ovde se radi povezivanje igraca
  //    //treba doraditi
  //    QList<Player*> players;
  //    message("Unesite svoje ime");
  //    QString name = getMessage();
  //    player = new Player(name);
  //    players.append(player);
  //    lora = new GameOnline(players);
  //    lora->play();

  // kako je kod ognjena i milice uradjeno povezivanje???????
}

void MainWindow::on_labelKartaURuci1_clicked()
{
  if ( player->getNumOfCards() < 1 )
  {
    ////////ispis greske trazi da ponovo bira
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(0)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(0);
}
void MainWindow::on_labelKartaURuci2_clicked()
{
  if ( player->getNumOfCards() < 2 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(1)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(1);
}
void MainWindow::on_labelKartaURuci3_clicked()
{
  if ( player->getNumOfCards() < 3 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(2)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(2);
}
void MainWindow::on_labelKartaURuci4_clicked()
{
  if ( player->getNumOfCards() < 4 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(3)) )
  {
    /////ispis greske mora ponovo da se bira karta
  }
  player->pickCardOnline(3);
}
void MainWindow::on_labelKartaURuci5_clicked()
{
  if ( player->getNumOfCards() < 5 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(4)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(4);
}
void MainWindow::on_labelKartaURuci6_clicked()
{
  if ( player->getNumOfCards() < 6 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(5)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(5);
}
void MainWindow::on_labelKartaURuci7_clicked()
{
  if ( player->getNumOfCards() < 7 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(6)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(6);
}
void MainWindow::on_labelKartaURuci8_clicked()
{
  if ( player->getNumOfCards() < 8 )
  {
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  if ( isCardDisabled(player->getCardAtPos(7)) )
  {
    /////ispis greske mora ponovo da se bira karta
    message("Nije moguce izabrati kartu. Birajte ponovo!");
  }
  player->pickCardOnline(7);
}

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  centralWidget()->setStyleSheet(
      "#centralWidget {"
      "border-image: url(:/../resources/background/sto.png)"
      " 0 0 0 0 stretch;}");

  ui->textEdit->setTextColor(Qt::white);
  ui->textEdit->setTextBackgroundColor(Qt::black);

  this->setWindowTitle("Lora");

  config = new Config();

  timer = new QTimer();
  lora = new Game();
  lora->setMainWindow(this);

  deck = new Deck();


  initializeGraphics();


  QString plyrName = "You";
  message("Unesite korisnicko ime");
  timer->start(10000);
  plyrName = inputText;
  inputText = "";

  message("Unesite lozinku");
  timer->start(10000);
  QString passwd = inputText;
  inputText = "";

  //////unosenje usrnm i passw cuvanje toga

  config->setOnline(plyrName, passwd);
  //    stats = new Stats(this, plyrName);


  talon = new Talon();


  help = new Help();

  client = new TcpClient();

  //    QString plyrName = getMessage();
  //////unosenje usrnm i passw cuvanje toga

  player = new Player(plyrName);


  // #TODO konektovanje

  setLanguage(config->getLanguage());

  message(tr("Welcome to ") + "Lora");

  //    if (stats->isFileCorrupted())
  //      message(tr("[Error]: The statistics file is corrupted!"));
}

MainWindow::~MainWindow()
{
  delete ui;
  delete config;
  delete lora;
  //    delete stats;
  delete deck;
  delete timer;
  delete player;
  delete client;
  delete help;
  delete talon;

  delete imageEmptyCard;
  delete imageSitHere;
  delete imageYourTurn;
}

Talon* MainWindow::getTalon()
{
  return talon;
}

void MainWindow::initializeGraphics()
{
  imageEmptyCard = new QImage("../../resources/cards/1x/empty.png", "PNG");
  imageSitHere = new QImage("../../resources/cards/1x/sithere.png", "PNG");
  imageYourTurn = new QImage("../../resources/cards/1x/card-base2.png", "PNG");

  labels[0] = ui->labelKartaURuci1;
  labels[1] = ui->labelKartaURuci2;
  labels[2] = ui->labelKartaURuci3;
  labels[3] = ui->labelKartaURuci4;
  labels[4] = ui->labelKartaURuci5;
  labels[5] = ui->labelKartaURuci6;
  labels[6] = ui->labelKartaURuci7;
  labels[7] = ui->labelKartaURuci8;

  labels[8] = ui->labelKartaNaTalonuDole;
  labels[9] = ui->labelKartaNaTalonuLevo;
  labels[10] = ui->labelKartaNaTalonuGore;
  labels[11] = ui->labelKartaNaTalonuDesno;
  labels[12] = ui->labelIgracDole;
  labels[13] = ui->labelIgracLevo;
  labels[14] = ui->labelIgracGore;
  labels[15] = ui->labelIgracDesno;
  labels[16] = ui->labelOnline;

  lcdScore[0] = ui->lcdBrojDole;
  lcdScore[1] = ui->lcdBrojLevo;
  lcdScore[2] = ui->lcdBrojGore;
  lcdScore[3] = ui->lcdBrojDesno;

  for ( int i = 0; i <= 11; ++i )
  {
    labels[i]->show();
    labels[i]->setPixmap(QPixmap::fromImage(
        deck->getCardBackImage()->scaledToHeight(cardHeight)));
    labels[i]->setDisabled(true);
  }
}


void MainWindow::gameOver()
{
  // TODO
  QString message1, message2;

  //  stats->increaseStats(0, STATS_GAME_FINISHED);

  clearDeck();

  if ( !lora->isItDraw() )
    message2 = tr("Won !");
  else
    message2 = tr("Draw !");


  lora->sortPlayersByPoints();
  //  stats->increaseStats(lora->  getPlayerAtPos(0)->getPlayerName(),
  //  STATS_FIRST_PLACE); stats->increaseStats(lora->
  //  getPlayerAtPos(1)->getPlayerName(), STATS_SECOND_PLACE);
  //  stats->increaseStats(lora->  getPlayerAtPos(2)->getPlayerName(),
  //  STATS_THIRD_PLACE); stats->increaseStats(lora->
  //  getPlayerAtPos(3)->getPlayerName(), STATS_FOURTH_PLACE);


  // stats->setScore(lora->  getPlayerAtPos(0)->getPlayerName(), lora->
  // getPlayerAtPos(0)->getPoints()); stats->setScore(lora->
  // getPlayerAtPos(1)->getPlayerName(), lora-> getPlayerAtPos(1)->getPoints());
  // stats->setScore(lora->  getPlayerAtPos(2)->getPlayerName(), lora->
  // getPlayerAtPos(2)->getPoints()); stats->setScore(lora->
  // getPlayerAtPos(3)->getPlayerName(), lora-> getPlayerAtPos(3)->getPoints());


  message("Player " + lora->getPlayerAtPos(0)->getPlayerName() +
          " won 1st place");
  message("Player " + lora->getPlayerAtPos(1)->getPlayerName() +
          " won 2nd place");
  message("Player " + lora->getPlayerAtPos(2)->getPlayerName() +
          " won 3rd place");
  message("Player " + lora->getPlayerAtPos(3)->getPlayerName() +
          " won 4th place");
}

void MainWindow::refreshScore(int i)
{
  lcdScore[i]->display(static_cast<int>(lora->getPlayerAtPos(i)->getPoints()));
}


void MainWindow::showDeck()
{
  if ( lora->getPlayerAtPos(0) == player )
  {
    QVector<Card*> cards = player->getCardsInHand();
    int numOfCards = player->getNumOfCards();
    for ( int i = 0; i < numOfCards; ++i )
    {
      labels[i]->show();
      if ( isCardDisabled(cards[i]) )
      {
        labels[i]->setPixmap(QPixmap::fromImage(
            cards[i]->getCardImageDisabled()->scaledToHeight(cardHeight)));
        labels[i]->setDisabled(true);
      }
      else
      {
        labels[i]->setPixmap(QPixmap::fromImage(
            cards[i]->getCardImage()->scaledToHeight(cardHeight)));
        labels[i]->setEnabled(true);
      }
    }
    for ( int i = numOfCards; i < 8; ++i )
    {
      labels[i]->show();
      labels[i]->setPixmap(QPixmap::fromImage(
          deck->getCardBackImage()->scaledToHeight(cardHeight)));
      labels[i]->setDisabled(true);
    }
  }
  else
  {
    for ( int i = 0; i < 8; ++i )
    {
      labels[i]->show();
      labels[i]->setPixmap(QPixmap::fromImage(
          deck->getCardBackImage()->scaledToHeight(cardHeight)));
    }
    setCardsDisabled();
  }
}


void MainWindow::setInfoChannel()
{
  int newHeight = height();

  newHeight += ui->textEdit->height() + ui->lineEdit->height();
  if ( newHeight > maxMainwindowHeight )
    newHeight = maxMainwindowHeight;

  setFixedHeight(newHeight);
  ui->textEdit->show();
}


void MainWindow::clearDeck()
{
  for ( int i = 0; i < 8; i++ )
    labels[i]->hide();
}

void MainWindow::clearTable()
{
  //  timer->start(200);
  for ( int i = 0; i < 4; i++ )
  {
    labels[14 + i]->setPixmap(
        QPixmap::fromImage(imageEmptyCard->scaledToHeight(cardHeight)));
  }
}


void MainWindow::showYourTurn()
{
  timer->start(200);
  if ( player != lora->getPlayerAtPos(0) )
    return;
  showDeck();
  labels[8 + player->getUserId()]->setPixmap(
      QPixmap::fromImage(imageYourTurn->scaledToHeight(cardHeight)));


  message("Pick card");
}

void MainWindow::setCardsDisabled()
{
  for ( int i = 0; i < 8; i++ )
    labels[i]->setDisabled(true);
}


void MainWindow::message(QString msg)
{
  ui->textEdit->append(msg);
}


void MainWindow::on_actionRules_triggered()
{
  help->show();
}


void MainWindow::on_actionReset_triggered()
{
  QMessageBox messageBox(this);
  messageBox.setText(tr("Do you want to reset statistics?"));
  messageBox.setInformativeText(tr("Are you sure?"));
  messageBox.addButton(QMessageBox::Yes);
  messageBox.addButton(QMessageBox::No);
  messageBox.setDefaultButton(QMessageBox::No);
  int ret = messageBox.exec();
  if ( ret == QMessageBox::Yes )
  {
    //     stats->reset();
    //     message(tr("[Info]: You've resetted the statistics!"));
  }
}

void MainWindow::on_actionShow_triggered()
{
  //  stats->show();
}

void MainWindow::setLanguage(int lang)
{
  ui->actionEnglish->setChecked(false);
  ui->actionSrpski->setChecked(false);

  qApp->removeTranslator(&translator);

  switch ( lang )
  {
    case LANG_ENGLISH:
      if ( translator.load(QLocale(QLocale::English),
                           QLatin1String("translation"), QLatin1String("_"),
                           QLatin1String(":/languages")) )
      {
        qApp->installTranslator(&translator);

        ui->actionEnglish->setChecked(true);
      }
      break;
    case LANG_SERBIAN:
      if ( translator.load(QLocale(QLocale::Serbian),
                           QLatin1String("translation"), QLatin1String("_"),
                           QLatin1String(":/languages")) )
      {
        qApp->installTranslator(&translator);

        ui->actionSrpski->setChecked(true);
      }
      break;
  }

  ui->retranslateUi(this);
  // stats->Translate();
}

void MainWindow::on_actionEnglish_triggered()
{
  ui->actionEnglish->setChecked(true);

  setLanguage(LANG_ENGLISH);

  config->setLanguage(LANG_ENGLISH);
}

void MainWindow::on_actionSrpski_triggered()
{
  ui->actionSrpski->setChecked(true);

  setLanguage(LANG_SERBIAN);

  config->setLanguage(LANG_SERBIAN);
}

void MainWindow::on_lineEdit_returnPressed()
{
  QString data;


  data += ui->lineEdit->text();

  message(data);

  ui->lineEdit->clear();
}

void MainWindow::addCardToTable(Card* card, Player* plr)
{
  labels[14 + plr->getUserId()]->setPixmap(
      QPixmap::fromImage(card->getCardImage()->scaledToHeight(cardHeight)));
  labels[14 + plr->getUserId()]->setEnabled(true);
}

void MainWindow::refreshTable()
{
  clearTable();
  for ( QPair<Card*, Player*> t : talon->getCardsOnTable() )
  {
    addCardToTable(t.first, t.second);
  }
}

void MainWindow::isMyTurn(Player* plr)
{
  if ( plr != player )
    return;
  showYourTurn();
}

void MainWindow::refreshMainWindow()
{
  setCardsDisabled();
}
