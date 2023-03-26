#include "card.hpp"
#include <string>

namespace ariel {

    Card::Card(Suit sut, Value val) : suit(sut), value(val) { 
            switch (val) {
                case ACE:   card_value = 1;  break;
                case TWO:   card_value = 2;  break;
                case THREE: card_value = 3;  break;
                case FOUR:  card_value = 4;  break;
                case FIVE:  card_value = 5;  break;
                case SIX:   card_value = 6;  break;
                case SEVEN: card_value = 7;  break;
                case EIGHT: card_value = 8;  break;
                case NINE:  card_value = 9;  break;
                case TEN:   card_value = 10; break;                
                case JACK:  card_value = 11; break;
                case QUEEN: card_value = 12; break;
                case KING:  card_value = 13; break;
            }
    }


    string Card::to_string() const {
        std::string suit_string;
        switch(suit) {
            case SPADES:    suit_string = "Spades";     break;
            case HEARTS:    suit_string = "Hearts";     break;
            case CLUBS:     suit_string = "Clubs";      break;
            case DIAMONDS:  suit_string = "Diamonds";   break;
        }

        std::string value_string;
        switch(value) {
            case ACE:   value_string = "Ace";    break;
            case TWO:   value_string = "Two";    break;
            case THREE: value_string = "Three";  break;
            case FOUR:  value_string = "Four";   break;
            case FIVE:  value_string = "Five";   break;
            case SIX:   value_string = "Six";    break;
            case SEVEN: value_string = "Seven";  break;
            case EIGHT: value_string = "Eight";  break;
            case NINE:  value_string = "Nine";   break;
            case TEN:   value_string = "Ten";    break;
            case JACK:  value_string = "Jack";   break;
            case QUEEN: value_string = "Queen";  break;
            case KING:  value_string = "King";   break;
        }

        return value_string + " of " + suit_string;
    }


}

