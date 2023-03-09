#include"Move.h"
#include"Player.h"
#include<string>
#include<iostream>
using namespace std;
Move::Move(){
}
Move::Move(string n){
    name = n;
}
string Move::getName() {
    return name;
}
