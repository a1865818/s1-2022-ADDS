#include"Truckloads.h"
#include"Reverser.h"
#include<iostream>
using namespace std;
int main () {
    //Truckloads
    Truckloads t;
    cout << t.numTrucks(14, 3) << endl;
    //Reverse
    Reverser revNum;
    Reverser revStr;
    cout << revNum.reverseDigit(56789) << endl;
    cout << revStr.reverseString("Minh") << endl;
    return 0;
}