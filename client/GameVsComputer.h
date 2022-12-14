#ifndef GAMEVSCOMPUTER_H
#define GAMEVSCOMPUTER_H
#include <QList>
#include "Game.h"
#include "deck.h"
#include "player.h"
class GameVsComputer : public Game
{
 public:
  GameVsComputer(Player* players);


  //    bool checkLora();
  void gameHeart();
  void gameQueen();
  void gameLeast();
  void gameMost();
  void gameJackClubLastHand();
  void gameKingHeartLastHand();
  void gameLora();
  void gameByChoice();
  void play();

 private:
  QList<Player*> players;
};

#endif  // GAMEVSCOMPUTER_H
