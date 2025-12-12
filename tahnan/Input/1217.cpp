#include <iostream>
using namespace std;

class Invoice {
private:
    string itemName;
    int quantity;
    float price;
public:
    Invoice(string n, int q, float p) { itemName = n; quantity = q; price = p } // missing semicolon
    float total() { return quantity * price; }
};

int main() {
    Invoice i("Pen", 10, 2.5);
    cout << "Total: " << i.total() << endl;
    return 0;
}
