#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main() {
    Player* Hum = new Human("Minh");
    Player* Com = new Human("Nguyen");
    Referee* Ref = new Referee;

    Player* Winner = Ref->refGame(Hum, Com);
    if (Winner == nullptr) cout << "It's a Tie";
    else cout << Winner->getName() << " Wins";
    return 0;
}