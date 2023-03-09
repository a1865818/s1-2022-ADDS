#include"Referee.h"

using namespace std;
Referee::Referee(){

}
Player* Referee::refGame(Player * p1, Player * p2) {
    string player1 = p1->makeMove()->getName();
    string player2 = p2->makeMove()->getName();
    string List_Move[8]={"Rock","Paper","Scissors","Robot","Zombie","Monkey", "Ninja","Pirate"};
    for (int i = 0; i < 8; i++)   
{
        if (player1 == List_Move[i]) po1=i;
        if (player2 == List_Move[i]) po2=i;
}
    if (po1<=2 && po2<=2)
    {
        if (po1==po2) return nullptr;
        else if (po1 == po2 + 1 || po1 == po2 - 2 ){
            return p1;
        }else return p2;
    }    
    else if (po1 >= 3 && po2 >=3){
        if (po1 == po2) return nullptr;
        else if ((po1 -po2) % 2 == 0){
            return po1 > po2 ? p1 : p2;
        }else return po1 > po2 ? p2 : p1;

    }else return nullptr;
}







