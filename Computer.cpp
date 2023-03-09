#include"Computer.h"
using namespace std;
Move* Computer::makeMove() {
    Move* newMove2 = new Move("Rock");
    return newMove2 ;
}

string Computer::getName() {
    return "Computer";
}
