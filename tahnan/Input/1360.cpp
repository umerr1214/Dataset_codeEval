#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    string name;
    double price;
    Item(string n, double p) { name=n; price=p; }
};

class ECommerceCart {
private:
    vector<Item> items;

public:
    void addItem(Item i) { items.push_back(i); }

    double totalPrice() {
        double total = 0;
        // Semantic error: sums price incorrectly
        for(int i=0;i<items.size();i++)
            total += items[i].price*2; // wrongly multiplies by 2
        return total;
    }

    void displayTotal() { cout << "Total: " << totalPrice() << endl; }
};

int main() {
    ECommerceCart cart;
    cart.addItem(Item("Book",50));
    cart.addItem(Item("Pen",10));
    cart.displayTotal();
    return 0;
}
