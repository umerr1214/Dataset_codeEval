#include <iostream>
using namespace std;

class Invoice {
    string itemName;
    int quantity;
    float price;
public:
    Invoice(string n, int q, float p) {
        itemName = n;
        quantity = q;
        price = p;
    }

    float totalCost() {
        float total = quantity * price;
        if (total > 100) total *= 0.9; // 10% discount
        return total;
    }

    void display() {
        cout << itemName << " x" << quantity << " = " << totalCost() << endl;
    }
};

int main() {
    Invoice i("Pen", 5, 10);
    Invoice j("Book", 12, 10);
    i.display();
    j.display();
    return 0;
}
