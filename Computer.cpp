#include"Computer.h"
#include"Player.h"
#include<string>
#include<iostream>
using namespace std;
string Computer::getName() {
    return "Computer";
}
Move* Computer::makeMove() {
    Move* newMove2 = new Move("Rock");
    return newMove2 ;
}
