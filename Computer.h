#ifndef COMPUTER_H
#define COMPUTER_H
#include"Player.h"

class Computer : public Player {
    std::string getName( ) ;
    Move* makeMove( );
};
#endif