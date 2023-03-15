#include"Reverser.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int Reverser::reverseDigit(int value){
    if(value < 0) return -1;
    if(value < 10) return value;
    int lastdigit = value % 10;
    int remainder = value / 10;
    return lastdigit * pow(10,getNumRemainder(remainder)) + reverseDigit(remainder);
}   
string Reverser::reverseString (std::string characters) {
        if (characters.empty()) {
            return "ERROR";
        }
        if (characters.size() == 1) {
            return characters;
        }
        char lastChar = characters[characters.size() - 1];
        string remainder = characters.substr(0, characters.size() - 1);
        return lastChar + reverseString(remainder);
}
int Reverser::getNumRemainder(int remainder){
    if(remainder < 10) return 1;
    return 1 + getNumRemainder(remainder/10);
}