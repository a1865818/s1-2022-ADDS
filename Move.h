#ifndef MOVE_H
#define MOVE_H
#include<iostream>
#include<string>
class Move {
    private:
        std::string name;
       
    public:
        Move();
        Move(std::string n);
        std::string getName();
};
#endif