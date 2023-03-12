#pragma once
#include <iostream>

using namespace std;

class Move {
private:
    string name;
public:
    Move();
    Move(string s);
    string getName();
};