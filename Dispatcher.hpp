#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
using namespace pandemic;
class Dispatcher : public Player
{
    public:
    Dispatcher(Board b , City c);
};
