#include "talon.h"

Talon::Talon(){
    numOfEl = 0;
}
Talon::~Talon(){}
QList<QPair<Card*, Player*>> Talon::getCardsOnTable(){
    return cardsOnTable;
}
void Talon::addCard(Card* c, Player* plyr){
    cardsOnTable.append(qMakePair(c, plyr));
    numOfEl++;
}
int Talon::countCardsWithNumber(Card::Number num){
    int count = 0;
    for(auto el:cardsOnTable){
        if(el.first->getCardNumber() == static_cast<unsigned int>(num))
            count++;
    }
    return count;
}
int Talon::countCardsWithSuit(Card::Suit s){
    int count = 0;
    for(auto el:cardsOnTable){
        if(el.first->getCardSuit() == s)
            count++;
    }
    return count;
}
QList<QPair<Card*, Player*>> Talon::getTalon(){
    return cardsOnTable;
}

QPair<Card*, Player*> Talon::takeFromTop(){
    numOfEl--;
    return cardsOnTable.takeLast();
}
Card::Suit Talon::getTalonSuit(){
    return cardsOnTable[0].first->getCardSuit();
}
bool Talon::empty(){
    return  numOfEl <= 0;
}
