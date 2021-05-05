#include "City.hpp"
#include "Board.hpp"

using namespace  pandemic;

Board& Board::operator=(int numOfDiseases)
{
    return *this;
}

Board& Board::operator[](City c)
{
    return *this;
}
bool Board::is_clean()
{
    return true;
}
void Board::remove_cures()
{
    return;
}

ostream& pandemic::operator<<(ostream &os, Board& b)
{
    return os;
}
