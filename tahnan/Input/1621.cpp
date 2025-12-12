#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int expiry;
    Item(string n, int e) : name(n), expiry(e) {}
};

class SmartFridge {
private:
    vector<Item> items;

public:
    void addItem(const string &name, int expiry) { items.push_back(Item(name, expiry)); }

    void checkExpired() const {
        for (const auto &item : items) {
            if (item.expiry <= 0) cout << item.name << " expired ";
        }
    }
};

int main() {
    SmartFridge fridge;
    fridge.addItem("Milk", 0);
    fridge.addItem("Cheese", 5);
    fridge.checkExpired();
}
