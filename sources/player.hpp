#pragma once

#include<iostream>
#include <string>

using namespace std;

namespace ariel
{
    class Player
    {
        private:
            string name;

        public:
            Player(const string& player_name): name(player_name){}
            string player_name(){return this->name;}

            int stacksize();
            int cardesTaken();
            
    }; // class Player

}; // namespace ariel

