#include<vector>
#include<string>
template <class T>
class Bag{
    private:
        vector<T> itemName;
        T id;
    public:
        void addItem(T itemName);
        void removeItem(T id);
        std::string returnItem(T itemName);
        
};