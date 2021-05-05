#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
using namespace pandemic;
class Virologist : public Player
{
    public:
    Virologist(Board b , City c);
};
