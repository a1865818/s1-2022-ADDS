#pragma once
#include<iostream>
class Move {
    private:
        std::string name;
       
    public:
        Move();
        Move(std::string n);
        std::string getName();
};