#include "BigNumCalc.h"
#include <algorithm> 

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNumList;
    for (int i = 0; i < numString.size(); i++) {
        bigNumList.push_back(numString[i] - '0');
    }
        return bigNumList;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    while (num1.size() < num2.size()) {
        num1.push_front(0);
    }
    while (num1.size() > num2.size()) {
        num2.push_front(0);
    }
    {
    int carry = 0;   
   while( num1.size() > 1 && num2.size() > 1){
    int sumDigit = num1.back() + num2.back() + carry;
    carry = sumDigit / 10;
    result.push_front(sumDigit % 10);
    num1.pop_back();
    num2.pop_back();
    }
   }
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;{
        num1.push_front(0);
    }
    int borrow = 0;
    while (num1.size() > num2.size()) {
        num2.push_front(0);
    }
    while (!num1.empty() && !num2.empty()) {
        int diffDigit = num1.back() - num2.back() - borrow;
        if (diffDigit < 0) {
            borrow = 1;
            result.push_front(diffDigit + 10);
        }
        else {
            result.push_front(diffDigit);
            borrow = 0;
        }
        num1.pop_back();
        num2.pop_back();
    }
    while (result.front() == 0) {
        result.pop_front();
    }
    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;
    while (num1.size() > 1){
        int mulDigit = num1.back() * num2.back() + carry;
        carry = mulDigit / 10;
        result.push_front(mulDigit % 10);
        num1.pop_back();
    }
    int first = num1.front() * num2.front() + carry;
    result.push_front(first % 10);
    if(first / 10 != 0){
        result.push_front(first / 10);
    }
    return result;
}