#include "GameOnline.h"


GameOnline::GameOnline(QList<Player*> players) : Game(players){}

void GameOnline::setCon(QTcpSocket* c){
    Game::setCon(c);
}

void GameOnline::gameQueen(){
    Game::gameQueen();
}
void GameOnline::gameLeast(){
    Game::gameLeast();
}
void GameOnline::gameMost(){
    Game::gameMost();
}
void GameOnline::gameJackClubLastHand(){
    Game::gameJackClubLastHand();
}
void GameOnline::gameKingHeartLastHand(){
    Game::gameKingHeartLastHand();
}
void GameOnline::gameLora(){
    Game::gameLora();
}
void GameOnline::gameByChoice(){
    Game::gameByChoice();
}

void GameOnline::play(){
    Game::play();
}
