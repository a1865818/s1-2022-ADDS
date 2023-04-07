#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include"Sort.h"
class RecursiveBinarySearch: public Sort{
    public:
        std::vector<int> sort(std::vector<int> list);
        bool  search(std::vector<int>, int value);
};


#endif