#ifndef CARD_H
#define CARD_H
#pragma once
#include <QObject>
#include <QImage>
class Card:public QObject
{
    Q_OBJECT

public:
    enum class Suit{
        CLUB = 0,
        DIAMOND,
        HEART,
        SPADE
    };

    enum class Number{
        SEVEN = 0,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE
    };
    Card(Card::Number num, Card::Suit s);
    ~Card();
    unsigned int getCardNumber();
    Card::Suit getCardSuit();
    QImage* getCardImage();
    QImage* getCardImageDisabled();
    int getVal();
private:
    Card::Suit suit;
    Card::Number number;
    QImage* cardImage;
    QImage* cardImageDisabled;


};



#endif // CARD_H
