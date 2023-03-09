#pragma once
#include"Player.h"

class Computer : public Player {
    Move* makeMove( );
    std::string getName( ) ;
};
