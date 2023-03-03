#ifndef HUMAN_H
#define HUMAN_H
#include"Player.h"
#include<string>
class Human : public Player {
public:
    std::string name;
    Human();
    Human(std::string name);
    char makeMove( );
    std::string getName( ) ;
};
#endif
