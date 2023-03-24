#include<vector>
#include<string>
template <class T>
class Bag{
    private:
        vector<T> itemName;
        T id;
    public:
        void addItem(T item);
        void removeItem();
        std::string returnItem();
        
};