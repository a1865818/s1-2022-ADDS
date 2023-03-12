#include "Computer.h"

Move* Computer::makeMove() {
    Move* newMove2 = new Move("Rock");
    return newMove2;
}

std::string Computer::getName() {
    return "Computer";
}