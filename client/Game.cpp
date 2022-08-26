#include "Game.h"

Game::Game(){

    timer = new QTimer();
    currentGame = GAME::HEART;

}
Game::Game(QList<Player*> plyrs){
    players = plyrs;
    talon = new Talon();
    timer = new QTimer();
    currentGame = GAME::HEART;
    for(int i=0;i<plyrs.size();++i){
        plyrs[i]->setUserId(i);
    }
}




Game::~Game(){
    delete timer;
}

void Game::setMainWindow(MainWindow* t){
     mainWindow = t;
     talon = mainWindow->getTalon();
}
void Game::addPlayer(Player *plyr){
    players.push_back(plyr);
    plyr->setUserId(players.size()-1);
}
//void Game::check(){
//}
//bool Game::checkLora(){
//
//}

QVector<Card*> Game::checkValidCards(Player* plr){
    if(GAME::LORA == currentGame){
        //TODO
        QVector<Card*> res;
        for(auto el:talon->getTalon()){
            for(Card* c:plr->getCardsInHand()){
                if(el.first->getVal() + 1 == c->getVal() ){
                    res.push_back(c);
                }

            }
        }
        return res;

    }
    if(talon->empty()){
        return plr->getCardsInHand();
    }
    if (talon->getCardsOnTable().length() == 0)
    {
        return plr->getCardsInHand();
    }
    QVector<Card*> cardsWithSuit = plr->getCardsWithSuit(talon->getTalonSuit());

    if(cardsWithSuit.size() == 0)
        return plr->getCardsInHand();

    return cardsWithSuit;

}


int Game::checkInvalidMove(Player* plr, Card* card) {
    if(checkValidCards(plr).indexOf(card) == -1)
        return 0;
    return 1;
}


bool Game::isCardSelectable(Player* plyr,Card* card)
{
    if (players.first() != plyr)
        return false;

            return (checkInvalidMove(plyr, card));
}
void Game::gameHeart(QTcpSocket *con){

    for(int i = 0; i < 8; ++i){
        if (con == nullptr){
            for(int j = 0; j < 4; ++j) {
                Card* selectedCard = players[j]->pickCard(GAME::HEART,  mainWindow);
                talon->addCard(selectedCard, players[j]);
                players.front()->removeCard(players.front()->getCardsInHand()[i]);
                 mainWindow->refreshMainWindow();

            }
        }
        else{
            onlineRound(con, m_clientPlayerNumber, players,  GAME::HEART);
        }

        int pts = talon->countCardsWithSuit(Card::Suit::HEART);

        Card::Suit suit = talon->getTalonSuit();
        QPair<Card*,Player*> played = talon->takeFromTop();
        unsigned int strongestCard = played.first->getCardNumber();
        Player* playerWithStrongestCard = played.second;

        while(!talon->empty()){
            played = talon->takeFromTop();
            if(played.first->getCardSuit() == suit && played.first->getCardNumber() > strongestCard){
                strongestCard = played.first->getCardNumber();
                playerWithStrongestCard = played.second;
            }
        }

        playerWithStrongestCard->addPoints(pts);
        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }
        int idx = players.indexOf(playerWithStrongestCard);
         mainWindow->refreshScore(idx);
    }

}
void Game::gameQueen(QTcpSocket *con){
    for(int i = 0; i < 8; ++i){
        if (con == nullptr){
            for(int j = 0; j < 4; ++j) {
                Card* selectedCard = players[j]->pickCard(GAME::QUEEN,  mainWindow);

                talon->addCard(selectedCard, players[j]);
                players.front()->removeCard(players.front()->getCardsInHand()[i]);
                 mainWindow->refreshMainWindow();

            }
        }
        else{
            onlineRound(con, m_clientPlayerNumber, players, GAME::QUEEN);
        }

        int pts = talon->countCardsWithNumber(Card::Number::QUEEN);

        Card::Suit suit = talon->getTalonSuit();
        QPair<Card*, Player*> played = talon->takeFromTop();
        unsigned int strongestCard = played.first->getCardNumber();
        Player* playerWithStrongestCard = played.second;

        while(!talon->empty()){
            played = talon->takeFromTop();
            if(played.first->getCardSuit() == suit && played.first->getCardNumber() > strongestCard){
                strongestCard = played.first->getCardNumber();
                playerWithStrongestCard = played.second;
            }
        }

        playerWithStrongestCard->addPoints(pts);
        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }
        int idx = players.indexOf(playerWithStrongestCard);
         mainWindow->refreshScore(idx);
    }
}
void Game::gameLeast(QTcpSocket *con){

    for(int i = 0; i < 8; ++i){
        if (con == nullptr){
            for(int j = 0; j < 4; ++j) {
                Card* selectedCard = players[j]->pickCard(GAME::LEAST,  mainWindow);

                talon->addCard(selectedCard, players[j]);
                players.front()->removeCard(players.front()->getCardsInHand()[i]);
                 mainWindow->refreshMainWindow();

            }
        }
        else{
            onlineRound(con, m_clientPlayerNumber, players,  GAME::LEAST);
        }

        Card::Suit suit = talon->getTalonSuit();
        QPair<Card*, Player*> played = talon->takeFromTop();
        unsigned int strongestCard = played.first->getCardNumber();
        Player* playerWithStrongestCard = played.second;

        while(!talon->empty()){
            played = talon->takeFromTop();
            if(played.first->getCardSuit() == suit && played.first->getCardNumber() > strongestCard){
                strongestCard = played.first->getCardNumber();
                playerWithStrongestCard = played.second;
            }
        }

        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }

        playerWithStrongestCard->addPoints(1);
        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }
        int idx = players.indexOf(playerWithStrongestCard);
         mainWindow->refreshScore(idx);
    }
}
void Game::gameMost(QTcpSocket *con){

    for(int i = 0; i < 8; ++i){
        if (con == nullptr){
            for(int j = 0; j < 4; ++j) {
                Card* selectedCard = players[j]->pickCard(GAME::MOST,  mainWindow);

                talon->addCard(selectedCard, players[j]);
                players.front()->removeCard(players.front()->getCardsInHand()[i]);
                 mainWindow->refreshMainWindow();

            }
        }
        else{
            onlineRound(con, m_clientPlayerNumber, players,  GAME::MOST);
        }

        Card::Suit suit = talon->getTalonSuit();
        QPair<Card*, Player*> played = talon->takeFromTop();
        unsigned int strongestCard = played.first->getCardNumber();
        Player* playerWithStrongestCard = played.second;

        while(!talon->empty()){
            played = talon->takeFromTop();
            if(played.first->getCardSuit() == suit && played.first->getCardNumber() > strongestCard){
                strongestCard = played.first->getCardNumber();
                playerWithStrongestCard = played.second;
            }
        }

        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }

        playerWithStrongestCard->addPoints(-1);
        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }
        int idx = players.indexOf(playerWithStrongestCard);
         mainWindow->refreshScore(idx);
    }
}
void Game::gameJackClubLastHand(QTcpSocket *con){

    for(int i=0; i<8; ++i){
        if (con == nullptr){
            for(int j=0; j<4; ++j){
                Card* selectedCard = players[j]->pickCard(GAME::JACK_CLUB_LAST_HAND,  mainWindow);

                talon->addCard(selectedCard, players[j]);
                players.front()->removeCard(players.front()->getCardsInHand()[i]);
                 mainWindow->refreshMainWindow();
            }
        }
        else{
            onlineRound(con, m_clientPlayerNumber, players, GAME::JACK_CLUB_LAST_HAND);
        }

        Card::Suit suit = talon->getTalonSuit();
        QPair<Card*, Player*> played = talon->takeFromTop();
        unsigned int strongestCard = played.first->getCardNumber();
        Player* playerWithStrongestCard =played.second;
        bool jackClub = false;
        while(!talon->empty()){
            played = talon->takeFromTop();
            if(played.first->getCardSuit() == suit && played.first->getCardNumber() > strongestCard){
                strongestCard = played.first->getCardNumber();
                playerWithStrongestCard =played.second;
            }
            if(played.first->getCardSuit() == Card::Suit::CLUB && played.first->getCardNumber() == static_cast<unsigned int>(Card::Number::JACK)){
                jackClub = true;
            }
        }
        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }
        if(jackClub){
            playerWithStrongestCard->addPoints(4);
            while(players.front() != playerWithStrongestCard){
                players.push_back(players.front());
                players.pop_front();
            }
        }
        if(i == 3){
            playerWithStrongestCard->addPoints(4);
            while(players.front() != playerWithStrongestCard){
                players.push_back(players.front());
                players.pop_front();
            }
        }
        int idx = players.indexOf(playerWithStrongestCard);
         mainWindow->refreshScore(idx);

    }
}
void Game::gameKingHeartLastHand(QTcpSocket *con){

    for(int i=0; i<8; ++i){
        if (con == nullptr){
            for(int j=0; j<4; ++j){
                Card* selectedCard = players[j]->pickCard(GAME::KING_HEART_LAST_HAND,  mainWindow);

                talon->addCard(selectedCard, players[j]);
                players.front()->removeCard(players.front()->getCardsInHand()[i]);
                 mainWindow->refreshMainWindow();
            }
        }
        else{
            onlineRound(con, m_clientPlayerNumber, players, GAME::KING_HEART_LAST_HAND);
        }

        Card::Suit suit = talon->getTalonSuit();
        QPair<Card*, Player*> played = talon->takeFromTop();
        unsigned int strongestCard = played.first->getCardNumber();
        Player* playerWithStrongestCard =played.second;
        bool kingHeart = false;
        while(!talon->empty()){
            played = talon->takeFromTop();
            if(played.first->getCardSuit() == suit && played.first->getCardNumber() > strongestCard){
                strongestCard = played.first->getCardNumber();
                playerWithStrongestCard =played.second;
            }
            if(played.first->getCardSuit() == Card::Suit::HEART && played.first->getCardNumber() == static_cast<unsigned int>(Card::Number::KING)){
                kingHeart = true;
            }
        }
        //////////////////////////
        while(players.front() != playerWithStrongestCard){
            players.push_back(players.front());
            players.pop_front();
        }
        /////////////////////////

        if(kingHeart){
            playerWithStrongestCard->addPoints(4);
            while(players.front() != playerWithStrongestCard){
                players.push_back(players.front());
                players.pop_front();
            }
        }
        if(i == 3){
            playerWithStrongestCard->addPoints(4);
            while(players.front() != playerWithStrongestCard){
                players.push_back(players.front());
                players.pop_front();
            }
        }

        int idx = players.indexOf(playerWithStrongestCard);
         mainWindow->refreshScore(idx);
    }
}
void Game::gameLora(QTcpSocket *con){
//          Talon talonHeart = Talon();
//          Talon talonSpade = Talon();
//          Talon talonDiamond = Talon();
//          Talon talonClub = Talon();

//          QVector<Talon> taloni{talonHeart, talonSpade, talonDiamond, talonClub};

//          bool krajIgre = false;
//          while(!krajIgre){
//              if (con == nullptr){
  //                for(int j = 0; j < 4; ++j){
    //                  if (checkLora()){
    ////                      std::cout << "Player " << players.front().getPlayerName() << " bira kartu." << std::endl;
    //                      unsigned selectedCard;
    ////                      std::cin >> selectedCard;
    //                      Card::Suit selectedCardSuit = players.front().getCardsInHand()[selectedCard].getTalonSuit();
    //                      unsigned int selectedCardNumber = players.front().getCardsInHand()[selectedCard].getCardNumber();

    //                      bool validCard = false;
    //                      while (!validCard){
    //                          for (unsigned int brojTalona = 0; brojTalona < 4; ++brojTalona){
    //                              if (!taloni[brojTalona].empty() && taloni[brojTalona].getTalonSuit() == selectedCardSuit){
    //                                  if (taloni[brojTalona].getCardNumber() == static_cast<unsigned int>(Card::Number::KING) && selectedCardNumber == static_cast<unsigned int>(Card::Number::SEVEN)){
    //                                      taloni[brojTalona].addCard(&players.front().getCardsInHand()[selectedCard], &players[j]);
    //                                      validCard = true;
    //                                      break;
    //                                  }

    //                                  if (taloni[brojTalona].getCardNumber() == selectedCardNumber - 1){
    //                                      taloni[brojTalona].addCard(&players.front().getCardsInHand()[selectedCard], &players[j]);
    //                                      validCard = true;
    //                                      break;
    //                                  }
    //                              }
    //                          }

    //                          switch (selectedCardSuit){

    //                              case Card::Suit::TREF:
    //                                  if (talonClub.empty()){
    //                                      talonClub.addCard(&players.front().getCardsInHand()[selectedCard], &players[j]);
    //                                      validCard = true;
    //                                      break;
    //                                  }

    //                              case Card::Suit::PIK:
    //                                  if (talonSpade.empty()){
    //                                      talonSpade.addCard(&players.front().getCardsInHand()[selectedCard], &players[j]);
    //                                      validCard = true;
    //                                      break;
    //                                  }

    //                              case Card::Suit::HERC:
    //                                  if (talonHeart.empty()){
    //                                      talonHeart.addCard(&players.front().getCardsInHand()[selectedCard], &players[j]);
    //                                      validCard = true;
    //                                      break;
    //                                  }

    //                              case Card::Suit::KARO:
    //                                  if (talonDiamond.empty()){
    //                                      talonDiamond.addCard(&players.front().getCardsInHand()[selectedCard], &players[j]);
    //                                      validCard = true;
    //                                      break;
    //                                  }
    //                          }

    //                          if (!validCard){
    //                              std::cout << "Izabrali ste nekorektnu kartu! Izaberite drugu." << std::endl;
    //                              std::cin >> selectedCard;
    //                              selectedCardSuit = players.front().getCardsInHand()[selectedCard].getTalonSuit();
    //                              selectedCardNumber = players.front().getCardsInHand()[selectedCard].getCardNumber();
    //                          }
    //                      }

    //                      if (players[j].getCardsInHand().empty()){
    //                          players[j].addPoints(-8);
    //                          krajIgre = true;
    //                          break;
    //                      }
    //                  }
    //                  else{
    //                      players[j].addPoints(1);
    //                  }
    //              }
//              }
//              else{
//                  onlineRound(con, m_clientPlayerNumber, players,  GAME::LORA);
//                  }
//          }
}
void Game::gameByChoice(QTcpSocket *con){
    GAME choice = players.front()->pickGame();

    switch (choice) {
        case GAME::HEART:
            gameHeart(con);
            break;
        case GAME::QUEEN:
            gameQueen(con);
            break;
        case GAME::LEAST :
            gameLeast(con);
            break;
        case GAME::MOST:
            gameMost(con);
            break;
        case GAME::JACK_CLUB_LAST_HAND:
            gameJackClubLastHand(con);
            break;
        case GAME::KING_HEART_LAST_HAND:
            gameKingHeartLastHand(con);
            break;
        case GAME::LORA:
            gameLora(con);
            break;
        default: {
            printf("Greska, uneti neku od igara\n");
            gameByChoice(con);
        }
    }
}
void Game::play(QTcpSocket *con){

    Deck *deck = new Deck();
    if (con!=nullptr){
        sendMessage(con, "/DECK");
        QString deckMessage = readMessage(con);
        QVector<QString> deckPerms(32);
        //transform deckMessage into deckPerms
        int perm_length = 0;
        int k = 0;
        while(deckMessage[k] != '.') {
            perm_length++;
            k++;
        }

        for(int i=0; i<32; i++) {
            QString pom;
            for(int j = i * (perm_length + 1); j < i * (perm_length + 1) + perm_length; j++)
                pom += deckMessage[j];

             deckPerms[i] = pom;
        }


        sendMessage(con, "/PLAYERS");
        QString playerPerm = readMessage(con);

        bool ok;
        m_clientPlayerNumber = players[0]->getPlayerName().toInt(&ok);
        if (!ok)
            std::cerr << "ERROR WITH CLIENT PLAYER NUMBER!" << std::endl;

        //transform playersPerm into players
        Player *player = players[0];
        players.clear();

        for(unsigned int i = 0; i < 4; i++)
        {
            if(m_clientPlayerNumber == playerPerm[i].digitValue())
                players.append(player);
            else
            {
                QChar playerPermNumber = playerPerm[i];
                Player* nonClientPlayer = new Player(playerPermNumber);
                players.append(nonClientPlayer);
            }
        }


    }
    QList<Player*> nowDeals = players;

    for(int i=0; i<4; ++i){
        deck->dealCards(nowDeals/*, i*7 + 0*/);
        gameHeart(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 1*/);
        gameQueen(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 2*/);
        gameLeast(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 3*/);
        gameMost(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 4*/);
        gameJackClubLastHand(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 5*/);
        gameKingHeartLastHand(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 6*/);
        gameLora(con);
        nowDeals = players;
        deck->dealCards(nowDeals/*, i*7 + 7*/);
        gameByChoice(con);
        players.push_back(players.front());
        players.pop_front();
        nowDeals = players;

    }
    //azuriranje rezultata u tabeli
     mainWindow->gameOver();

}

void Game::onlineRound(QTcpSocket* con  , int playerPosition, QList<Player*> players,  GAME gameEnum)
{
    for(int i = 0; i < 4; i++)
    {
        if(i == playerPosition)
        {
            Card* selectedCard = players[i]->pickCard(gameEnum,  mainWindow);
            int cardPosition =players[i]->getCardsInHand().indexOf(selectedCard);
            talon->addCard(selectedCard, players[i]);
            players[i]->removeCard(selectedCard);

            QString message;
            message.append("/CARD ");
            message.append(QString::number(cardPosition));
            sendMessage(con, message);
            QString tmp = readMessage(con);
        }
        else
        {
            int cardPlayedPosition = readMessage(con).toInt();
            Card* cardPlayed = players[i]->getCardAtPos(cardPlayedPosition);
            talon->addCard(cardPlayed, players[i]);
            players[i]->removeCard(cardPlayed);
             mainWindow->refreshMainWindow();

        }


    }
}

void Game::sendMessage(QTcpSocket *con  , QString text)
{
    if (text.isEmpty() || con->state() != QAbstractSocket::ConnectedState)
        return;

    QDataStream socketStream(con);
    socketStream.setVersion(QDataStream::Qt_5_12);

    QByteArray byteArray = text.toUtf8();

    socketStream << byteArray;
}

QString Game::readMessage(QTcpSocket *con)
{
    while (con->bytesAvailable() < quint64(sizeof(quint32)))
    {
        if (!con->waitForReadyRead())
            return "";
    }

    QDataStream stream(con);
    quint32 msgSize = 0;
    stream >> msgSize;

    int length = qint64(msgSize - sizeof(quint32));
    while (con->bytesAvailable() < length)
    {
        if (con->waitForReadyRead())
            return "";
    }

    QByteArray buffer;
    buffer.resize(length - sizeof(quint32));
    stream.skipRawData(sizeof(quint32));
    stream.readRawData(buffer.data(), length - sizeof(quint32));

    auto mess = QString::fromUtf8(buffer);
    qDebug() << mess;
    return mess;
}

Player* Game::getPlayerAtPos(int i){
    return players[i];
}

void Game::shufflePlayers(){
    std::random_shuffle(players.begin(), players.end());

}
bool Game::isItDraw()
{
    for(int i=0;i<4;++i){
        for(int j=i+1; j<4; ++j){
            if(players[i]->getPoints() == players[j]->getPoints())
                return true;
        }
    }
    return false;
}

QList<Player*> Game::getPlayers(){
    return players;
}

int cmp(const void* a, const void* b)
{
    return ((Player*)b)->getPoints() - ((Player*)a)->getPoints();
}

void Game::sortPlayersByPoints(){
    std::qsort(&players, players.size(), sizeof(Player*), cmp);
}

