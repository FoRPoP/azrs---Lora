#pragma once
#ifndef DECK_H
#define DECK_H

#include <QObject>
#include <QList>
#include <QVector>
#include <qrandom.h>
#include <QRandomGenerator>
#include <algorithm>

#include "Card.h"
#include "player.h"
class Deck : public QObject
{
    Q_OBJECT

public:
    Deck();
    ~Deck();
    unsigned int getNumberOfCards();
    bool empty();
    Card* takeCard();
    void dealCards(QList<Player*> players, QString deckPerm = " ");
    void shuffleDeck(QString deckPerm = " ");
    QImage* getCardBackImage();

private:
    unsigned int numberOfCards;
    QVector<Card*> deck;
    QImage* cardBackImage;
    QImage* imageYourTurn;
    QImage* imageBackCard;
};

#endif // DECK_H
