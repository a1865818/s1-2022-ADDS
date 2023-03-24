#include<string>
std::string stars(int n, std::string acc){
    if (n == 0) return acc;
    else return stars(n-1, acc + "*");
}
std::string stars(int n){
    return stars(n, "");
}
