#include"RecursiveBinarySearch.h"
#include<vector>
#include<iostream>
using namespace std;
bool RecursiveBinarySearch::search(std::vector<int> list, int value){
    int n = list.size();
    int mid = n / 2;
    if (n == 0)
    {
        return false;
    }
    if (list[mid] == value)
    {
        return true;
    }
    else if (list[mid] > value)
    {
        vector<int> left;
        for (int i = 0; i < mid; i++)
        {
            left.push_back(list[i]);
        }
        return search(left, value);
    }
    else
    {
        vector<int> right;
        for (int i = mid + 1; i < n; i++)
        {
            right.push_back(list[i]);
        }
        return search(right, value);
    }
}