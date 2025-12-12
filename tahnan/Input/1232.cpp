#include <iostream>
using namespace std;

class Invoice {
public:
    string itemName;
    int quantity;
    float price;
    Invoice(string name, int q, float p) { itemName = name; quantity = q; price = p; }
    float totalCost() { return quantity * price - 10; } // LOGICAL ERROR: discount applied incorrectly
};

int main() {
    Invoice inv("Pen", 2, 5);
    cout << "Total: " << inv.totalCost() << endl;
    return 0;
}
