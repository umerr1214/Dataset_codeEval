#include <iostream>
using namespace std;

class Invoice {
public:
    string itemName;
    int quantity;
    float price;
    Invoice(string n, int q, float p) 
    {
        itemName = n;
        quantity = q;
        price = p;
    }

    float totalCost() 
    {
        return quantity * price;
    }
};

// SEMANTIC ERROR: derives from string instead of Invoice
class MyInvoice : public string {};

int main() 
{
    Invoice inv("Book", 3, 10);
    cout << "Total: " << inv.totalCost() << endl;
    return 0;
}
