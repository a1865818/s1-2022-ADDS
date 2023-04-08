#ifndef QUICKSORT_H
#define QUICKSORT_H
#include"Sort.h"
class QuickSort: public Sort{
    public:
        std::vector<int> sort(std::vector<int> list);
        // void swap(int *a, int *b);
};



#endif