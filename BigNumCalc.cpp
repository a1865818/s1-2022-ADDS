#include "BigNumCalc.h"
#include <algorithm> 

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNumList;
    for (char& c : numString){
        bigNumList.push_back(c - '0');
    }
        return bigNumList;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;
    while (!num1.empty() || !num2.empty() || carry != 0) {
        int sum = carry;
        if (!num1.empty()) {
        sum += num1.back();
        num1.pop_back();
    }
    if (!num2.empty()) {
        sum += num2.back();
        num2.pop_back();
    }
    result.push_front(sum % 10);
    carry = sum / 10;
    }
    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;
    while (!num1.empty() || !num2.empty()) {
        int digit = borrow;
    if (!num1.empty()) {
        digit += num1.back();
        num1.pop_back();
    }
    if (!num2.empty()) {
        digit -= num2.back();
        num2.pop_back();
    }
    if (digit < 0) {
        digit += 10;
        borrow = -1;
    } else {
        borrow = 0;
    }
    result.push_front(digit);
    }
    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }
    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;
    for (int& digit : num1) {
        int prod = digit * num2.front() + carry;
        result.push_back(prod % 10);
        carry = prod / 10;
    }
    if (carry > 0) {
        result.push_back(carry);
    }
    while (!result.empty() && result.back() == 0) {
        result.pop_back();
    }
    std::reverse(result.begin(), result.end());
    return result;
}