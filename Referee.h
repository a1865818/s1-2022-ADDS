#pragma once

#include "Player.h"

class Referee {
    public:
    Referee ();
    Player * refGame(Player * player1, Player * player2);
};

