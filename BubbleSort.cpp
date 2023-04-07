#include"BubbleSort.h"
#include<vector>
#include<iostream>
using namespace std;
vector<int> Sort::sort(vector<int> list){
    int n = list.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
        
    }
    return list;
}