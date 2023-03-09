#pragma once
#include"Player.h"
#include"Move.h"
#include<string>
class Human : public Player {
public:
    std::string name;
    Human();
    Human(std::string name);
    Move* makeMove( );
    std::string getName( ) ;
};
