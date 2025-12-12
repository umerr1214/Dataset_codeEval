#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name;
    string expiry;
    Item(string n, string e){ name=n; expiry=e; }
};

class SmartFridge {
private:
    vector<Item> items;
public:
    void addItem(Item i){ items.push_back(i); }

    void checkExpired() {
        // Logical error: incorrectly prints non-expired items instead of expired
        for(int i=0;i<items.size();i++){
            if(items[i].expiry>"2023-10-10")
                cout<<items[i].name<<" expired"<<endl;
        }
    }
};

int main() {
    SmartFridge fridge;
    fridge.addItem(Item("Milk","2023-10-05"));
    fridge.addItem(Item("Cheese","2023-10-15"));
    fridge.checkExpired();
    return 0;
}
