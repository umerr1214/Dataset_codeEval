#include <iostream>
#include <vector>
using namespace std;

class ECommerceCart {
private:
    vector<string> items;

public:
    void addItem(string item) {
        items.push_back(item);
    }

    void removeItem(string item) {
        // Logical error: removes item only if it's last element
        if(items.back() == item) items.pop_back();
    }

    void display() {
        for(auto &i:items) cout << i << endl;
    }
};

int main() {
    ECommerceCart cart;
    cart.addItem("Shoes");
    cart.addItem("Shirt");
    cart.removeItem("Shoes");
    cart.display();
    return 0;
}
