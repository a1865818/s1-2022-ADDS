#pragma once
#include"Player.h"

class Human : public Player {
public:
    std::string name;
    Human();
    Human(std::string name);
    Move* makeMove( );
    std::string getName( ) ;
};
