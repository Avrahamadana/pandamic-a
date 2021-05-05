#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
using namespace pandemic;
class FieldDoctor : public Player
{
    public:
    FieldDoctor(Board b , City c);
};
