#include<string>
#include<iostream>
#include"Player.h"
#include"Computer.h"
#include"Referee.h"
#include"Human.h"
using namespace std;
// extern Player* Referee::refGame(Player * p1, Player * p2) ;
int main () {
    Referee* ref = new Referee;
    Player* human = new Human("Minh");
    Player* com = new Human("Nguyen");

    Player* winner = ref->refGame(human, com);
    if (winner == nullptr)
    {
        cout<<"It's a Tie";
    }else{
        cout<<winner->getName()<<" Wins"<<endl;
    }
    
    return 0;

}
