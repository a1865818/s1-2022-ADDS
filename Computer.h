#pragma once
#include"Player.h"
#include"Move.h"
#include<string>
class Computer : public Player {
    Move* makeMove( );
    std::string getName( ) ;
};
