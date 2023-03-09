#include"Move.h"

using namespace std;
Move::Move(){
}
Move::Move(string n){
    name = n;
}
string Move::getName() {
    return name;
}
