#include"Human.h"

using namespace std;
string hmove;
Human::Human() {
    name="Human";
}
Move* Human::makeMove() {
    
    cout<<"Enter move:";
    cin>>hmove;
    Move* newMove1 = new Move(hmove);
    return newMove1;
}
string Human::getName() {
    return name;
}
Human::Human(string hname){
    name=hname;
}
