#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    string p1 = player1->makeMove()->getName();
    string p2 = player2->makeMove()->getName();

    string moveList[8] = {"Rock", "Paper", "Scissors", "Robot", "Zombie", "Monkey", "Ninja", "Pirate"};

    int pos1, pos2;

    for (int i = 0; i < 8; ++i) {
        if (p1 == moveList[i]) pos1 = i;
        if (p2 == moveList[i]) pos2 = i;
    }

    if (pos1 <= 2 && pos2 <= 2) {
        if (pos1 == pos2) return nullptr;
        else if (pos1 == pos2 + 1 || pos1 == pos2 - 2) {
            return player1;
        }
        else return player2;
    }
    else if (pos1 >= 3 && pos2 >= 3) { 
        if (pos1 == pos2) return nullptr;
        else if ((pos1 - pos2) % 2 == 0) {
            return pos1 > pos2 ? player1 : player2; // if (pos1 > pos2) return player else return player2;
        }
        else  return pos1 > pos2 ? player2 : player1;
    }
    else {
        return nullptr;
    }
}