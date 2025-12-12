#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name;
    string expiry;
    Item(string n,string e){ name=n; expiry=e; }
};

class SmartFridge {
public: // Semantic error: items vector public
    vector<Item> items;

    void addItem(Item i){ items.push_back(i); }

    void checkExpired() {
        // Misuses logic: prints all items instead of expired only
        for(int i=0;i<items.size();i++)
            cout<<items[i].name<<" expired"<<endl;
    }
};

int main(){
    SmartFridge fridge;
    fridge.addItem(Item("Milk","2023-10-05"));
    fridge.addItem(Item("Cheese","2023-10-15"));
    fridge.checkExpired();
    return 0;
}
