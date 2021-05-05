#include "doctest.h"

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;
TEST_CASE("Good pandemic code")
{
    Board board;

    CHECK(board.is_clean() == true);

    OperationsExpert Player{board, City::Atlanta};
    CHECK(Player.role() == "OperationsExpert");
    Researcher player1(board, City::Washington);
    CHECK(player1.role() == "Researcher");
    Scientist player2{board, City::Baghdad, 3};
    CHECK(player2.role() == "Scientist");
    FieldDoctor player3{board, City::Beijing};
    CHECK(player3.role() == "FieldDoctor");
    GeneSplicer player4{board, City::Bogota};
    CHECK(player4.role() == "GeneSplicer");
    Dispatcher player5{board, City::BuenosAires};
    CHECK(player5.role() == "Dispatcher");
    Medic player6{board, City::Cairo};
    CHECK(player6.role() == "Medic");
    Virologist player7{board, City::Cairo};
    CHECK(player7.role() == "player6");
    CHECK(player7.role() == "player6");
    CHECK(player7.role() == "player6");
    CHECK(player7.role() == "player6");
    CHECK(player4.role() == "GeneSplicer");
    CHECK(player4.role() == "GeneSplicer");
    CHECK(player2.role() == "Scientist");
    CHECK(player2.role() == "Scientist");
    CHECK(player2.role() == "Scientist");
    CHECK(Player.role() == "OperationsExpert");
    CHECK(Player.role() == "OperationsExpert");
    CHECK(Player.role() == "OperationsExpert");

   
}