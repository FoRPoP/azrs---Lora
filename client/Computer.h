#ifndef COMPUTER_H
#define COMPUTER_H
#include "player.h"
#include "Game.h"
#include "talon.h"
#include <QString>
#include <QVector>
#include <algorithm>
#include <QList>
#include <QPair>
#include "talon.h"


class Player;
class Game;

class Computer: public Player{
    Q_OBJECT
public:
    Computer(QString ime="");
    void takeCard(Card* card);
    void addPoints(unsigned int pts);
    Card* pickCard(Game::GAME currentGame);
    Game::GAME pickGame();
    QString getPlayerName();
    QVector<Card*>getcardsInHand();
    unsigned int getPoints();
    bool operator==(Computer* other);
    bool operator!=(Computer* other);


private:
    QString playerName;
    QVector<Card*> cardsInHand;
    unsigned int points;
};



#endif //COMPUTER_H
