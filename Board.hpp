#pragma once
#include "City.hpp"
#include "Player.hpp"
#include <iostream>
using namespace std;
namespace pandemic
{
    class Board
    {
        public:
        Board& operator[]( City c);
        Board& operator=(int numOfDiseases);
        bool is_clean();
        void remove_cures();
        friend ostream& operator<<(ostream &os, Board& b);
    };
};