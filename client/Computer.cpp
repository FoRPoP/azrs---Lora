//
// Created by tekisooj on 4.12.21..
//


#include "Computer.h"

Computer::Computer(QString name){
    Player();
    playerName = name;
    points = 0;
}

void Computer::takeCard(Card* card){
    cardsInHand.push_back(card);
}
void Computer::addPoints(unsigned int pts){
    points += pts;
}

/////////////////////////////
Card* Computer::pickCard( Game::GAME currentGame){
    Talon* talon = new Talon();
    Card::Suit talonSuit = talon->getTalonSuit();
    QList<QPair<Card*, Player*>> cardsOnTable = talon->getCardsOnTable();
    //Kada imamo kartu istog znaka bacamo najmanju
    if(currentGame == Game::GAME::MOST){
        //ako igramo igru sto vise, zelimo da bacimo najjacu kartu da bismo odneli talon, tj uzeli poene
        QList<Card*>::iterator pos = std::max_element(cardsInHand.begin(), cardsInHand.end(), [talonSuit](Card card)
        {   if(card.getCardSuit() == talonSuit)
            return card.getCardNumber();
            return static_cast<unsigned int>(Card::Number::ACE) + 1;});
        Player::removeCard(*pos);
        return *pos;

    }
    else{
        if(std::find_if(cardsInHand.begin(), cardsInHand.end(), [talonSuit](Card card){return card.getCardSuit() == talonSuit;})){
            QList<Card*>::iterator pos = std::min_element(cardsInHand.begin(), cardsInHand.end(), [talonSuit](Card card)
            {   if(card.getCardSuit() == talonSuit)
                return card.getCardNumber();
                return static_cast<unsigned int>(Card::Number::ACE) + 1;});
            Player::removeCard(*pos);
            return *pos;
        }
            //Kada nemamo kartu istog znaka bacamo najvecu kartu
        else {
            //ovo izbacuje najvecu kartu
//        card playingCard =  std::max_element(cardsInHand.begin(), cardsInHand.end(), [](card& card)
//        {
//            return static_cast<int>(card.getCardNumber());
//        });
//        Igrac::izbaciKartu(playingCard);
//        return;

            unsigned int numHearts = std::count_if(cardsInHand.begin(), cardsInHand.end(), [](Card* card){return card->getCardSuit() == Card::Suit::HEART;});
            unsigned int numDiamonds = std::count_if(cardsInHand.begin(), cardsInHand.end(), [](Card* card){return card->getCardSuit() == Card::Suit::DIAMOND;});
            unsigned int numSpades = std::count_if(cardsInHand.begin(), cardsInHand.end(), [](Card* card){return card->getCardSuit() == Card::Suit::SPADE;});
            unsigned int numClubs = std::count_if(cardsInHand.begin(), cardsInHand.end(), [](Card* card){return card->getCardSuit() == Card::Suit::CLUB;});

            Card* playingCard = cardsInHand.front();
//izbacuje najvecu kartu ili ukoliko ih ima vise iste jacine onu koja je "sama"
            for(auto card:cardsInHand){

                switch (card->getCardSuit()) {
                    case Card::Suit::HEART:
                        if(playingCard->getCardNumber() < card->getCardNumber()){
                            playingCard = card;
                        }
                        else if(playingCard->getCardNumber() == card->getCardNumber() && numHearts == 1){
                            playingCard = card;
                        }
                        break;
                    case Card::Suit::CLUB:
                        if(playingCard->getCardNumber() < card->getCardNumber()){
                            playingCard = card;
                        }
                        else if(playingCard->getCardNumber() == card->getCardNumber() && numClubs == 1){
                            playingCard = card;
                        }
                        break;
                    case Card::Suit::SPADE:
                        if(playingCard->getCardNumber() < card->getCardNumber()){
                            playingCard = card;
                        }
                        else if(playingCard->getCardNumber() == card->getCardNumber() && numSpades == 1){
                            playingCard = card;
                        }
                        break;
                    case Card::Suit::DIAMOND:
                        if(playingCard->getCardNumber() < card->getCardNumber()){
                            playingCard = card;
                        }
                        else if(playingCard->getCardNumber() == card->getCardNumber() && numDiamonds == 1){
                            playingCard = card;
                        }
                        break;
                }
            }
            Player::removeCard(playingCard);
            return playingCard;
        }
    }


}

Game::GAME Computer::pickGame(){
    return static_cast<Game::GAME>(random() %7);
}


QString Computer::getPlayerName() {
    return Player::getPlayerName();
}
QVector<Card*> Computer::getcardsInHand() {
    return Player::getCardsInHand();
}
unsigned int Computer::getPoints() {
    return Player::getPoints();
}

bool Computer::operator==(Computer* other) {
    return Player::operator==(other);
}

bool Computer::operator!=(Computer* other)
{
    return Player::operator!=(other);
}
