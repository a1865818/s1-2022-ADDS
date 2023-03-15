#ifndef REVERSER_H
#define REVERSER_H
#include<string>
class Reverser{
    private:
        int value;
        std::string character;
    public:
        int reverseDigit(int value);
        std::string reverseString(std::string character);
        int getNumRemainder(int remainder);                                                                   
};
#endif