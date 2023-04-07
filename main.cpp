#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


int main(){
    //get user input
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> list;
    int num;
    while (ss >> num) {
        list.push_back(num);
    }
    
    //check if input correct
    for (int i = 0; i < list.size(); i++){
        cout << list[i] << " ";
    }
    cout << endl;
    
    //perform qsort
    QuickSort qsort;
    list = qsort.sort(list);

    //perform binsearch
    RecursiveBinarySearch binSearch;
    bool a = binSearch.search(list, 1);

    //print sorted list and binsearch
    if (a == true){
        cout << "true" << " ";
    }
    else{
        cout << "false" << " ";
    }

    for (int i = 0; i < list.size(); i++){
        cout << list.at(i) << " ";
    }
    cout << endl;    
    return 0;    
}