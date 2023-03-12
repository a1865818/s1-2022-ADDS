#include "Player.h"

using namespace std;

class Human : public Player{
public:
    Human();
    Human(string hname);
    Move* makeMove();
    string getName();
private: 
    string name;
};