#ifndef CLORA__H
#define CLORA__H

#include <QObject>
#include <QVector>
#include "player.h"
#include "deck.h"
#include "talon.h"

const int backCard     = 100;
const int yourTurn     = 255;


const int CLUB          = 0;
const int SPADE         = 1;
const int DIAMOND       = 2;
const int HEART         = 3;
const int FREESUIT      = 4;

const int NOERROR       = 0;
const int ERRHEART      = 1;
const int ERRSUIT       = 2;
const int ERRQUEEN      = 3;



class CLora : public QObject
{
    Q_OBJECT

public:
    CLora();
    ~CLora();

private: // variables


    bool cardsSelected[4][8];

    unsigned int userId;
    Player* plyrId[4];
    Player* user;
    Talon* talon;
    Card::Suit currentSuit;
    Card* cardLeft;
    QVector<Player*> players;



private: // functions

    bool isCardOnTable(Card* card);


    Card*  getLowestSuit(Player* plyr, Card::Suit suit);
    int  getLowestSuitPos(Player* plyr, Card::Suit suit);
    int  getCardPosition(Player* plyr, Card* card);
    Card*  getHighestSuit(Player* plr, Card::Suit suit);
    int  getHighestSuitPos(Player* plr, Card::Suit suit);
    Card*  getHighestCardTable();
    int  checkInvalidMove(Player* plr, Card* card);
    int  evalCardStrength(Player* plr, Card* card);


    void initVars();
    void resetCardsOnTable();
    void resetScore();
    void resetCardsPlayed();
    void resetCardsLeftInSuit();
    void resetPlrHasCard();
    void randomDeck();
    void processCard(Card* card);
    void advanceTurn();
    void resetPlrCardsInSuit();

public: // functions
    bool isItDraw();
    bool isItMyTurn();
    bool isCardSelectable(Card* card);

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

    void newGame();
    void sortPlrCards();

    signals:
    void sigClearTable();
    void sigPlayCard(Card* card, int idx);
    void sigRefreshDeck(Player* plr, bool d);
    void sigScore(int score, int idx);
    void sigYourTurn(int idx);
    void sigGameOver(int score1, int score2, int score3, int score4);
};

#endif // CLORA__H

