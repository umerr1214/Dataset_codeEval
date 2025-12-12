#include <iostream>
using namespace std;

class Laptop {
    string brand;
    double price;
    string processor;
public:
    Laptop() : brand("Unknown"), price(0), processor("None") {}
    Laptop(string b, double p) : brand(b), price(p), processor("i5") {} // Robustness: processor defaulted
    void display() { cout << brand << " " << price << " " << processor << endl; }
};

int main() {
    Laptop l1;
    Laptop l2("Dell", 1200);
    l1.display();
    l2.display();
    return 0;
}
