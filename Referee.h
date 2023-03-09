#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"

class Referee {
    public:
    Referee ();
    int po1,po2;
    Player * refGame(Player * player1, Player * player2);
};
#endif

