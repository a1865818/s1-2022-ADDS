#include"Bag.h"
#include<string>
#include <stdlib.h>     
#include <time.h> 
#include<vector>
using namespace std;
template <class T>
void Bag<T>::addItem(T item){
   
    itemName.push_back(item);
}
template <class T>
void Bag<T>::removeItem(T id){
    srand(time(NULL));
    id = rand() % itemName.size() + 1;
    itemName.erase(itemName.begin()+id);
}
template <class T>
std::string Bag<T>::returnItem(T item){
    return itemName;
}
template class Bag<int>;
template class Bag<string>;
template class Bag<double>;
template class Bag<char>;
template class Bag<float>;







