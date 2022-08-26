#include "GameVsComputer.h"

GameVsComputer::GameVsComputer(Player* player) : Game()
{

    Game::addPlayer(player);
    Game::addPlayer(new Computer(""));
    Game::addPlayer(new Computer(""));
    Game::addPlayer(new Computer(""));
    Game::setCon(nullptr);
}


void GameVsComputer::gameQueen(){
    Game::gameQueen();
}
void GameVsComputer::gameLeast(){
    Game::gameLeast();
}
void GameVsComputer::gameMost(){
    Game::gameMost();
}
void GameVsComputer::gameJackClubLastHand(){
    Game::gameJackClubLastHand();
}
void GameVsComputer::gameKingHeartLastHand(){
    Game::gameKingHeartLastHand();
}
void GameVsComputer::gameLora(){
    Game::gameLora();
}
void GameVsComputer::gameByChoice(){
    Game::gameByChoice();
}

void GameVsComputer::play(){

    Game::play();
}
