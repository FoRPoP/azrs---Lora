#include "deck.h"

Deck::Deck(){
    numberOfCards = 0;

    for(unsigned int s = static_cast<unsigned int>(Card::Suit::CLUB); s <= static_cast<unsigned int>(Card::Suit::SPADE); ++s){
        for(unsigned int num = static_cast<unsigned int>(Card::Number::SEVEN); num <= static_cast<unsigned int>(Card::Number::ACE); ++num){
            Card* card = new Card(static_cast<Card::Number>(num), static_cast<Card::Suit>(s));
            deck.append(card);
            numberOfCards+=1;
        }
    }
    QString cardImg = "../resources/cards/1x/back-maroon.png";
    cardBackImage = new QImage(cardImg, "PNG");
}

Deck::~Deck(){
    delete cardBackImage;
    delete imageYourTurn;
    delete imageBackCard;
}

unsigned int Deck::getNumberOfCards(){
    return numberOfCards;
}
bool Deck::empty(){
    return numberOfCards == 0;
}
Card* Deck::takeCard(){
    numberOfCards -=1;
    return deck.takeLast();
}
void Deck::dealCards(QList<Player*> players, QString deckPerm){
    shuffleDeck(deckPerm);
    while(numberOfCards>0){

        for(Player* plr : players){
            plr->takeCard(takeCard());
            plr->takeCard(takeCard());

        }


    }
}

void Deck::shuffleDeck(QString deckPerm){

    if (deckPerm == " ")
        std::random_shuffle(deck.begin(), deck.end());
    else{
        int n = deckPerm.length();
        QVector<Card*> deckTmp = deck;
        for(int i=0; i<n; i++) {
            deckTmp[i] = deck[deckPerm[i].digitValue()];
        }
        deck = deckTmp;
        deckTmp.clear();
        deckTmp.squeeze();
    }
}
QImage* Deck::getCardBackImage(){
    return cardBackImage;
}
