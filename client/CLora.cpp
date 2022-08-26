#include "CLora.h"
//#include "variants.h"
#include <assert.h>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "define.h"
#include <iostream>
CLora::CLora()
{
}

CLora::~CLora()
{
}

void CLora::newGame()
{
    initVars();

    resetScore();

    resetCardsOnTable();
    resetCardsLeftInSuit();
    resetCardsPlayed();
    resetPlrCardsInSuit();
    resetPlrHasCard();

    randomDeck();
    userId = user->getUserId();

    emit sigClearTable();
    emit sigRefreshDeck(user, true);
}

void CLora::initVars()
{
    for(int i=0;i<4;++i){
        for(int j=0;j<8;++j){
            cardsSelected[i][j] = false;
        }
    }

}

void CLora::resetScore()
{
    for (int i=0; i<4; i++) {
        players[i]->resetPoints();

        emit sigScore(players[i]->getPoints(), i);
    }
}


void CLora::randomDeck()
{

    Deck* deck = new Deck();
    deck->dealCards(players);
    sortPlrCards();
    delete deck;
}


void CLora::sortPlrCards() {

    for(Player* plyr:players){
        plyr->sortCards();
    }

}


void CLora::advanceTurn()
{
    players.push_back(players.first());


    emit sigClearTable();


}



//int CLora::playCard(int idx)
//{
//  Card* card = players[userId]->getCardsInHand()[idx];

//  int check = checkInvalidMove(players[userId], card);

//  if (check != NOERROR)
//    return check;

//  currentSuit = card->getCardSuit();
//  players[userId]->removeCard(card);
//  processCard(card);
//  sortPlrCards();

//  emit sigRefreshDeck(players[userId], false);
//  emit sigPlayCard(card, userId);

//  advanceTurn();

//  return check;
//}


bool CLora::isItDraw()
{
    for(int i=0;i<4;++i){
        for(int j=i+1; j<4; ++j){
            if(players[i]->getPoints() == players[j]->getPoints())
                return true;
        }
    }
    return false;
}

bool CLora::isCardSelectable(Card* card)
{
    if (players.first() != user)
        return false;

    return (checkInvalidMove(user, card) == NOERROR);
}

Card* CLora::getLowestSuit(Player* plr, Card::Suit suit)
{
    for(Card* card:plr->getCardsInHand()){
        if(card->getCardSuit() == suit)
            return card;
    }
    return nullptr;
}

int CLora::getLowestSuitPos(Player* plr, Card::Suit suit)
{
    int i=0;
    for(Card* card:plr->getCardsInHand()){
        if(card->getCardSuit() == suit)
            return i;
        i++;
    }
    return -1;
}

int CLora::getHighestSuitPos(Player* plr, Card::Suit suit)
{
    int i=0;
    bool found=false;
    for(Card* card:plr->getCardsInHand()){
        if(card->getCardSuit() == suit)
            found = true;
        else if(card->getCardSuit() != suit && !found){
            return i;
        }
        ++i;
    }
    return -1;
}

Card* CLora::getHighestSuit(Player* plr, Card::Suit suit)
{
    Card* c = nullptr;
    for(Card* card:plr->getCardsInHand()){
        if(card->getCardSuit() == suit){
            c = card;
        }

    }
    return c;
}

int CLora::countMyCards(){
    return user->getNumOfCards();
}
int CLora::countPlrCards(Player* plyr)
{
    return plyr->getNumOfCards();
}

int CLora::getCardPosition(Player* plr, Card* card)
{
    int i=0;
    for(Card* c:plr->getCardsInHand()){
        if(c == card){
            return i;
        }
        ++i;
    }
    return -1;
}




int CLora::getLowestScore()
{
    unsigned int score = static_cast<int>(INFINITY);
    for(Player* plr : players){
        if(plr->getPoints() < score)
            score = plr->getPoints();
    }
    return score;
}

int CLora::getHighestScore()
{
    unsigned int score = 0;
    for(Player* plr : players){
        if(plr->getPoints() > score)
            score = plr->getPoints();
    }
    return score;
}



bool CLora::isItMyTurn()
{
    return players.front() == user;
}


Card::Suit CLora::getCurrentSuit()
{
    return currentSuit;
}

int CLora::getMyScore()
{
    for(Player* plr:players){
        if(plr == user)
            return plr->getPoints();
    }
}




Player* CLora::whoAmI(){
    return user;
}

Card* CLora::getCard(int plr, int idx)
{
    return players[plr]->getCardsInHand()[idx];
}

Card* CLora::getCard(Player* plr, int idx)
{
    return plr->getCardsInHand()[idx];
}


Card* CLora::getCard(int idx)
{
    return user->getCardsInHand()[idx];

}


