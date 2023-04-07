#include"QuickSort.h"
#include<vector>
#include<iostream>
using namespace std;
vector <int> QuickSort::sort(vector<int> list){
    int n = list.size();
    int pivot = list[2];
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < n; i++)
    {
        if (list[i] < pivot)
        {
            left.push_back(list[i]);
        }
        else if (list[i] > pivot)
        {
            right.push_back(list[i]);
        }
    }
    if (left.size() > 1)
    {
        left = sort(left);
    }
    if (right.size() > 1)
    {
        right = sort(right);
    }
    vector<int> result;
    for (int i = 0; i < left.size(); i++)
    {
        result.push_back(left[i]);
    }
    result.push_back(pivot);
    for (int i = 0; i < right.size(); i++)
    {
        result.push_back(right[i]);
    }
    return result;
}