#include<iostream>
using namespace std;
#include "game.hpp"

using namespace ariel;
namespace ariel
{
    Game::Game(Player player1, Player player2) : p1(player1), p2(player2){}
    void Game::playTurn(){
        cout << "playTurn" << endl;
    }
    void Game::printLastTurn(){
        cout << "printLastTurn" << endl;

    }
    void Game::playAll(){
        cout << "playAll" << endl;

    }
    void Game::printWiner(){
        cout << "printWiner" << endl;

    }
    void Game::printLog(){
        cout << "printLog" << endl;

    }
    void Game::printStats(){
        cout << "printStats" << endl;

    }

}; // namespace ariel