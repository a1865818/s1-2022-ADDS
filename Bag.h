#include<vector>
#include<string>
template <class T>
class Bag{
    private:
        vector<T> itemName;
        T id;
    public:
        void addItem(T item);
        void removeItem(T id);
        std::string returnItem(T item);
        
};