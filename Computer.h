#include "Player.h"

class Computer : public Player {
public:
    Move* makeMove();
    std::string getName();
};
