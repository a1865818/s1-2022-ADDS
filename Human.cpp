#include<string>
#include"Human.h"
#include"Player.h"
#include<iostream>
using namespace std;
char hmove;
char Human::makeMove() {
    cout<<"Enter move:";
    cin>>hmove;
    return hmove;
}
string Human::getName() {
    return name;
}
Human::Human(string hname){
    name=hname;
}

