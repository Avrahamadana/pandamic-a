#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
using namespace pandemic;
class Medic : public Player
{
    public:
    Medic(Board b , City c);
};