#ifndef PLAYER_H
#define PLAYER_H

#pragma once

#include <QObject>
#include <QString>
#include <QVector>
#include <QtAlgorithms>
#include <QTimer>
#include <QMessageBox>

#include "define.h"
#include "Card.h"
#include "talon.h"
#include "gui/mainwindow.h"

class Card;
class Game;
class MainWindow;

class Player:public QObject{

    Q_OBJECT


public:
    Player();
    Player(QString name);
    ~Player();
    Card* pickCardOnline(int i);
    Card* pickCard(GAME currentGame, MainWindow*  mainWindow);
    Card* pickCardComputer(GAME currentGame);
    GAME pickGame();
    void takeCard(Card* card);
    void addPoints(unsigned int pts);
    void playCard();
    void removeCard(Card* card);
    QString getPlayerName();
    QVector<Card*> getCardsInHand();
    unsigned int getPoints();
//    QString getCardName();
    bool operator==(const Player* other);
    bool operator!=(const Player* other);
    void resetPoints();
    void reset();
    bool hasCard(Card* card);
    void sortCards();
    void setUserId(unsigned int id);
    unsigned int getUserId();
    int getNumOfCards();
    Card* getCardAtPos(int i);
    QVector<Card*> getCardsWithSuit(Card::Suit s);
private:
    QString playerName;
    QVector<Card*> cardsInHand;
    unsigned int points;
    unsigned int userId;
    Card* pickedCard;


};

#endif // PLAYER_H
