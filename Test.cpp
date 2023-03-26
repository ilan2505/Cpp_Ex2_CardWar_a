#include "doctest.h"

#include <iostream>
#include <string>
using namespace std;

#include "sources/player.hpp"
#include "sources/card.hpp"
#include "sources/game.hpp"
using namespace ariel;




TEST_CASE("Testing"){


    SUBCASE("Game Simple"){

        Player p1("dummy1");
        Player p2("dummy2");
        CHECK(p1.player_name() == "dummy1");    //1
        CHECK(p2.player_name() == "dummy2");    //2

        Game game(p1,p2);
        CHECK(p1.cardesTaken() == 26);          //3
        CHECK(p2.cardesTaken() == 26);          //4

        game.playAll();

        if (p1.stacksize() == 0)
        {
            CHECK(p1.stacksize() == 0);         //5
            CHECK(p2.stacksize() == 52);        //6

            CHECK(p1.cardesTaken() == 0);       //7
            CHECK(p2.cardesTaken() == 52);      //8

        }else{
            CHECK(p1.stacksize() == 52);        //5
            CHECK(p2.stacksize() == 0);         //6

            CHECK(p1.cardesTaken() == 52);      //7
            CHECK(p2.cardesTaken() == 0);       //8

        }
 
    }

    SUBCASE("Cards testing"){

        Card ace_hearts(Suit::HEARTS, Value::ACE);
        CHECK(ace_hearts.to_string() == "Ace of Hearts");       //9
        CHECK(ace_hearts.get_card_value() == 1);

        Card ace_spades(Suit::SPADES, Value::ACE);
        CHECK(ace_spades.to_string() == "Ace of Spades");
        CHECK(ace_spades.get_card_value() == 1);

        Card ace_clubs(Suit::CLUBS, Value::ACE);
        CHECK(ace_clubs.to_string() == "Ace of Clubs");
        CHECK(ace_clubs.get_card_value() == 1);

        Card ace_diamonds(Suit::DIAMONDS, Value::ACE);
        CHECK(ace_diamonds.to_string() == "Ace of Diamonds");
        CHECK(ace_diamonds.get_card_value() == 1);


        Card king_hearts(Suit::HEARTS, Value::KING);
        CHECK(king_hearts.to_string() == "King of Hearts");
        CHECK(king_hearts.get_card_value() == 13);

        Card king_spades(Suit::SPADES, Value::KING);
        CHECK(king_spades.to_string() == "King of Spades");
        CHECK(king_spades.get_card_value() == 13);              //20

        Card king_clubs(Suit::CLUBS, Value::KING);
        CHECK(king_clubs.to_string() == "King of Clubs");
        CHECK(king_clubs.get_card_value() == 13);

        Card king_diamonds(Suit::DIAMONDS, Value::KING);
        CHECK(king_diamonds.to_string() == "King of Diamonds");
         CHECK(king_diamonds.get_card_value() == 13);           //24

    }

}