#include "player.h"


Player::Player(){
    this->playerName = "";
    userId = -1;
    pickedCard = nullptr;
}

Player::Player(QString name){
    this->playerName = name;
    pickedCard = nullptr;
}

Player::~Player(){

}

Card* Player::pickCardOnline(int i){
    return cardsInHand[i];
}

Card* Player::pickCard(GAME currentGame,MainWindow*  mainWindow){
    QTimer * t = new QTimer();
    t->start(20000);
    mainWindow->isMyTurn(this);
    Card* tmp = pickedCard;
    pickedCard = nullptr;
    if(tmp == nullptr)
        return pickCardComputer(currentGame);
    return tmp;
}


Card* Player::pickCardComputer(GAME currentGame){
    Talon* talon = new Talon();
    if(talon->getCardsOnTable().length() == 0)
    {
        //treba neki dr nacin za biranje karte
        return cardsInHand[0];
    }
    Card::Suit talonSuit = talon->getTalonSuit();
    QList<QPair<Card*, Player*>> cardsOnTable = talon->getCardsOnTable();
    //Kada imamo kartu istog znaka bacamo najmanju
    if(currentGame == GAME::MOST){
        //ako igramo igru sto vise, zelimo da bacimo najjacu kartu da bismo odneli talon, tj uzeli poene
        Card* selected = nullptr;
        for(Card* c:cardsInHand){
            if(c->getCardSuit() == talonSuit){
                if(nullptr == selected)
                    selected = c;
                else if(c->getCardNumber() > selected->getCardNumber())
                    selected = c;
            }

        }
        if(nullptr != selected){
            removeCard(selected);
            return selected;
        }
        else{
            Card* selected = nullptr;
            for(Card* c:cardsInHand){

                if(c->getCardNumber() < selected->getCardNumber())
                        selected = c;
            }
            removeCard(selected);
            return selected;

        }

    }
    else{
        Card* selected = nullptr;
        for(Card* c:cardsInHand){
            if(c->getCardSuit() == talonSuit){
                if(nullptr == selected)
                    selected = c;
                else if(c->getCardNumber() < selected->getCardNumber())
                    selected = c;
            }

        }
        if(nullptr != selected){
            removeCard(selected);
            return selected;
        }

        else {


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
            removeCard(playingCard);
            return playingCard;
        }
    }
}

GAME Player::pickGame(){
    //////ovaj deo treba srediti
    QMessageBox* messageBox = new QMessageBox();
    messageBox->setText(tr("Choose game."));
    messageBox->addButton("Hearts",HEART_BUTTON);
    messageBox->addButton("Queen",QUEEN_BUTTON);
    messageBox->addButton("Least",LEAST_BUTTON);
    messageBox->addButton("Most",MOST_BUTTON);
    messageBox->addButton("Jack Club Last Hand",JACK_CLUB_LAST_HAND_BUTTON);
    messageBox->addButton("King Heart Last Hand",KING_HEART_LAST_HAND_BUTTON);
    messageBox->addButton("Lora",LORA_BUTTON);
    int ret = messageBox->exec();
    delete messageBox;
    return static_cast<GAME>(ret);
}
void Player::takeCard(Card* card){
    cardsInHand.push_back(card);
    if(cardsInHand.size() == 8){
        sortCards();
    }
}
void Player::removeCard(Card* card){
    cardsInHand.removeOne(card);
}
void Player::addPoints(unsigned int pts){
    points += pts;
}
void Player::playCard(){
    //
}
QString Player::getPlayerName(){
    return playerName;
}
QVector<Card*> Player::getCardsInHand(){
    return cardsInHand;
}
unsigned int Player::getPoints(){
    return points;
}
bool Player::operator==(const Player* other){
    return this->playerName == other->playerName;
}
bool Player::operator!=(const Player* other){
    return this->playerName != other->playerName;
}

void Player::resetPoints(){
    points = 0;
}

void Player::reset(){
    points = 0;
    cardsInHand.clear();
}

bool Player::hasCard(Card* card){

    for(Card* c :cardsInHand){
        if(c == card)
            return true;
    }
    return false;
}

int compare(const void* a, const void* b){
    if(((Card*)a)->getCardSuit() == ((Card*)b)->getCardSuit()){
        return ((Card*)a)->getCardNumber() < ((Card*)b)->getCardNumber();
    }
    return static_cast<int>(((Card*)a)->getCardSuit()) < static_cast<int>(((Card*)b)->getCardSuit());
}

void Player::sortCards(){

    std::sort(cardsInHand.begin(), cardsInHand.end(), compare);

}

void Player::setUserId(unsigned int id){
    userId = id;
}

unsigned int Player::getUserId(){
    return userId;
}
int Player::getNumOfCards(){
    return cardsInHand.size();
}

Card* Player::getCardAtPos(int i){
    return cardsInHand[i];
}

QVector<Card*> Player::getCardsWithSuit(Card::Suit s){
    QVector<Card*> res;
    for(Card* card:cardsInHand){
        if(s == card->getCardSuit())
            res.append(card);

    }
    return res;
}
