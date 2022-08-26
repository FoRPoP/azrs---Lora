#ifndef GAMEONLINE_H
#define GAMEONLINE_H

#pragma once

#include <QList>

#include "Game.h"
#include "player.h"


class GameOnline : public Game
{
  Q_OBJECT
 public:
  GameOnline(QList<Player*> players);

  //    void check();
  //    bool checkLora();
  void setCon(QTcpSocket* c);
  void gameHeart();
  void gameQueen();
  void gameLeast();
  void gameMost();
  void gameJackClubLastHand();
  void gameKingHeartLastHand();
  void gameLora();
  void gameByChoice();
  void play();
};

#endif  // GAMEONLINE_H
