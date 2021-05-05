#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <iostream>
using namespace std;
namespace pandemic
{
    class Player
    {

    public:
        Player &take_card(City c);
        Player &drive(City c);
        Player &fly_direct(City c);
        Player &fly_charter(City c);
        Player &fly_shuttle(City c);
        Player &discover_cure(Color c);
        Player &treat(City c);
        Player& build();
        string role();
        friend ostream &operator<<(ostream &os, Player &b);
    };
};
