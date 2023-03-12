#include "Human.h"

Human::Human() {
    this->name = "Human";
}
Human::Human(string hname){
    this->name = hname;
}

Move* Human::makeMove() {
    string hmove;
    cout << "Enter move:";
    cin >> hmove;
    Move* newMove1 = new Move(hmove);
    return newMove1;
}

string Human::getName() {
    return name;
}