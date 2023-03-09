#pragma once
#include <string>
#include"Move.h"
class Player
{
public:
    
    Player();
    virtual Move* makeMove( ) = 0;
    virtual std::string getName( ) = 0;
    
};


