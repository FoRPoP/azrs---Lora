#ifndef GAME_H
#define GAME_H

#pragma once

#include <iostream>
#include <QObject>
#include <QList>
#include <QPair>
#include <QtWidgets>
#include <QtNetwork/QtNetwork>

#include "player.h"
#include "Card.h"
#include "talon.h"
#include "define.h"
#include "deck.h"
#include "gui/mainwindow.h"

class Player;
class MainWindow;
class Talon;
class Deck;

class Game: public QObject{

    Q_OBJECT

public:

    Game();
    Game(QList<Player*> plyrs);
    ~Game();
    void setMainWindow(MainWindow* t);
    void addPlayer(Player* plyr);

    void gameHeart(QTcpSocket *con=nullptr);
    void gameQueen(QTcpSocket *con=nullptr);
    void gameLeast(QTcpSocket *con=nullptr);
    void gameMost(QTcpSocket *con=nullptr);
    void gameJackClubLastHand(QTcpSocket *con=nullptr);
    void gameKingHeartLastHand(QTcpSocket *con=nullptr);
    void gameLora(QTcpSocket *con=nullptr);
    void gameByChoice(QTcpSocket *con=nullptr);
    void play(QTcpSocket *con=nullptr);
    void onlineRound(QTcpSocket*, int, QList<Player*>,  GAME);

    GAME getCurrentGame();
    bool isCardOnTable(Card* card);
    Card*  getLowestSuit(Player* plyr, Card::Suit suit);
    int  getLowestSuitPos(Player* plyr, Card::Suit suit);
    int  getCardPosition(Player* plyr, Card* card);
    Card*  getHighestSuit(Player* plr, Card::Suit suit);
    int  getHighestSuitPos(Player* plr, Card::Suit suit);
    Card*  getHighestCardTable();
    int  checkInvalidMove(Player* plr, Card* card);
    QVector<Card*> checkValidCards(Player* plr);
    int  evalCardStrength(Player* plr, Card* card);

    void initVars();
    void resetCardsOnTable();
    void resetScore();
    void resetCardsPlayed();
    void resetCardsLeftInSuit();
    void resetPlrHasCard();
    void randomDeck();
    void processCard(Card* card);
//    void advanceTurn();
    void resetPlrCardsInSuit();
    bool isItDraw();
    bool isItMyTurn();
    bool isCardSelectable(Player* plyr,Card* card);

    Player* whoAmI();
    Card::Suit getCurrentSuit();
    int  playCard(int idx);
    Card*  getCard(int plr, int idx);
    Card* getCard(Player* plr, int idx);
    Card*  getCard(int idx);
    int  getMyScore();
    int  countMyCards();
    int  countPlrCards(Player* plr);

    int  getPlrNameId(Player* plr);
    int  getLowestScore();
    int  getHighestScore();

   // void newGame();
    void sortPlrCards();
    QList<Player*> getPlayers();
    void sortPlayersByPoints();
    Player* getPlayerAtPos(int i);
    void shufflePlayers();


private:

    QList<Player*> players;
    Talon* talon;
    int m_clientPlayerNumber;
    QTimer* timer;
    Card::Suit currentSuit;
    Card* cardLeft;
    GAME currentGame;
    MainWindow*  mainWindow;

private slots:
    QString readMessage(QTcpSocket*);
    void sendMessage(QTcpSocket*, QString);
//signals:
//    void playCard(Card* card/*, int idx*/);
////    void sigRefreshDeck(Player* plr/*, bool d*/);
////    void sigScore(int score, int idx);
//    void sourTurn(int idx);
//    void gameOver();
//    void refreshScore(int i);
//    void refreshMainWindow();
};


#endif // GAME_H
