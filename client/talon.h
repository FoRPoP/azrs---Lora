#ifndef TALON_H
#define TALON_H

#include <QList>
#include <QObject>
#include <QPair>

#include "Card.h"
#include "player.h"

class Card;
class Player;
class Talon : public QObject
{
  Q_OBJECT
 public:
  Talon();
  ~Talon();
  QList<QPair<Card*, Player*>> getCardsOnTable();
  void addCard(Card* c, Player* plyr);
  int countCardsWithNumber(Card::Number num);
  int countCardsWithSuit(Card::Suit s);
  QPair<Card*, Player*> takeFromTop();
  Card::Suit getTalonSuit();
  bool empty();
  QList<QPair<Card*, Player*>> getTalon();

 private:
  QList<QPair<Card*, Player*>> cardsOnTable;
  int numOfEl;
};
#endif  // TALON_H
