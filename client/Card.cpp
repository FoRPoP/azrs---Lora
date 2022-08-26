#include "Card.h"

Card::Card(Card::Number num, Card::Suit s){
    number = num;
    suit = s;

    QString cardImg = "../resources/cards/1x/";
    switch(suit){
        case(Suit::CLUB):
            cardImg += "club_";
        break;
        case(Suit::SPADE):
            cardImg += "spade_";
        break;
        case(Suit::HEART):
            cardImg += "heart_";
        break;
        case(Suit::DIAMOND):
            cardImg += "diamond_";
        break;
    }
    switch(number){
        case(Number::SEVEN):
            cardImg += "7";
        break;
        case(Number::EIGHT):
            cardImg += "8";
        break;
        case(Number::NINE):
            cardImg += "9";
        break;
        case(Number::TEN):
            cardImg += "10";
        break;
        case(Number::JACK):
            cardImg += "jack";
        break;
        case(Number::QUEEN):
            cardImg += "queen";
        break;
        case(Number::KING):
            cardImg += "king";
        break;
        case(Number::ACE):
            cardImg += "1";
        break;

    }
    cardImg+=".png";

    cardImage = new QImage(cardImg, "PNG");


    cardImageDisabled = new QImage(cardImg, "PNG");
    *cardImageDisabled = cardImageDisabled->convertToFormat(QImage::Format_Grayscale8);

}

Card::~Card(){
    delete cardImage;
    delete cardImageDisabled;
}
unsigned int Card::getCardNumber(){
    return static_cast<unsigned int>(number);
}
Card::Suit Card::getCardSuit(){
    return suit;
}

QImage* Card::getCardImage(){


    return cardImage;
}
QImage* Card::getCardImageDisabled(){
    return cardImageDisabled;
}

int Card::getVal(){
    return static_cast<int>(suit)*8 + static_cast<int>(number);
}
