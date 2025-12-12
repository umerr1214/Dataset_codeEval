#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name, expiry;
    Item(string n,string e){name=n; expiry=e}
};

class SmartFridge {
private:
    vector<Item> items;
public:
    void addItem(Item i){items.push_back(i);}
    void checkExpired(){
        for(int i=0;i<items.size();i++)
            cout<<items[i].name<<" expires "<<items[i].expiry<<endl
    }
};

int main() {
    SmartFridge f;
    f.addItem(Item("Milk","2025-12-01"));
    f.addItem(Item("Cheese","2025-11-30"));
    f.checkExpired();
    return 0;
}
