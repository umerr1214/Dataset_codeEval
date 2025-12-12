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
        float cost = quantity * price;
        if(quantity > 10) 
        {
            cost *= 0.9; // discount
        }
        return cost;
    }

    void display() 
    {
        cout << itemName << ": " << totalCost() << endl;
    }
};

int main() 
{
    Invoice i("Book", 12, 10);
    i.display();
    Invoice j("Pen", 5, 2);
    j.display();
    return 0;
}
