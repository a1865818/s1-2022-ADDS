#include"Referee.h"
#include"Player.h"
#include"Computer.h"
#include"Human.h"
#include<string>
#include<iostream>
using namespace std;
Referee::Referee(){

}
Player* Referee::refGame(Player * p1, Player * p2) {
    char move = p1->makeMove();
    if (move == 'P')
    {
        return p1;
    }else if (move == 'S'){
        return p2;
    }else {
        return nullptr;
    }
}
