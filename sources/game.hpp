#pragma once

#include <string>
#include "player.hpp"

namespace ariel 
{
    class Game 
    {
    private:
        Player p1, p2;

    public:
        Game(Player player1, Player player2);
        void playTurn();
        void playAll();
        void printLastTurn();
        void printLog();
        void printWiner();
        void printStats();

    }; // class Game 

} // namespace ariel

