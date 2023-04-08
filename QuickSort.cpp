#include"QuickSort.h"
#include<vector>
#include<iostream>
using namespace std;
 std::vector<int>QuickSort:: sort(std::vector<int> list) {
        if (list.size() <= 1) {
            return list;
        }
        int pivot_index;
        if (list.size() >= 3) {
            pivot_index = 2;
        } else {
            pivot_index = 0;
        }
        int pivot = list[pivot_index];
        std::vector<int> left;
        std::vector<int> right;
        for (int i = 0; i < list.size(); i++) {
            if (i == pivot_index) {
                continue;
            }
            if (list[i] < pivot) {
                left.push_back(list[i]);
            } else {
                right.push_back(list[i]);
            }
        }
        left = sort(left);
        right = sort(right);
        std::vector<int> sorted_list;
        sorted_list.reserve(left.size() + 1 + right.size());
        sorted_list.insert(sorted_list.end(), left.begin(), left.end());
        sorted_list.push_back(pivot);
        sorted_list.insert(sorted_list.end(), right.begin(), right.end());
        return sorted_list;


 }







// vector <int> QuickSort::sort(vector<int> list){
//     int n = list.size();
//     int pivot = list[2];
//     vector<int> left;
//     vector<int> right;
//     for (int i = 0; i < n; i++)
//     {
//         if (list[i] < pivot)
//         {
//             left.push_back(list[i]);
//         }
//         else if (list[i] > pivot)
//         {
//             right.push_back(list[i]);
//         }
//     }
//     if (left.size() > 1)
//     {
//         left = sort(left);
//     }
//     if (right.size() > 1)
//     {
//         right = sort(right);
//     }
//     vector<int> result;
//     for (int i = 0; i < left.size(); i++)
//     {
//         result.push_back(left[i]);
//     }
//     result.push_back(pivot);
//     for (int i = 0; i < right.size(); i++)
//     {
//         result.push_back(right[i]);
//     }
//     return result;
// }