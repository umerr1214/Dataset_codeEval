#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int expiry; // in days
    Item(string n, int e) { name = n; expiry = e; }
};

class SmartFridge {
public:
    vector<Item> items;

    void addItem(string n, int e) {
        // inefficient: repeated unnecessary push_back in a loop
        for (int i = 0; i < 1; i++)
            items.push_back(Item(n, e));
    }

    void checkExpired() {
        for (int i = 0; i < items.size(); i++) {
            if (items[i].expiry <= 0)
                cout << items[i].name << " expired ";
        }
    }
};

int main() {
    SmartFridge fridge;
    fridge.addItem("Milk", 0);
    fridge.addItem("Cheese", 5);
    fridge.checkExpired();
}
