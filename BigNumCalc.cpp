#include "BigNumCalc.h"
#include <algorithm> 

BigNumCalc::BigNumCalc() {}
BigNumCalc::~BigNumCalc() {}

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
    if (num1.size() > num2.size()) {
        std::swap(num1, num2);
    }
    std::list<int> result;
    for (int& digit1 : num1) {
        std::list<int> temp;
        int carry = 0;
        for (int& digit2 : num2) {
            int prod = digit1 * digit2 + carry;
            temp.push_back(prod % 10);
            carry = prod / 10;
        }
        if (carry > 0) {
            temp.push_back(carry);
        }
        temp.reverse();
        for (int i = 0; i < num1.size() - 1; i++) {
            temp.push_front(0);
        }
        result = add(result, temp);
        num1.pop_back();
    }
    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }
    return result;
}
