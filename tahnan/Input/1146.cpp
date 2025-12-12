#include <iostream>
using namespace std;

class Laptop {
    string brand; int price; string processor;
public:
    Laptop() : brand("Dell"), price(1000), processor("i5") {} 
    Laptop(string b, int p) : Laptop() { price = p; brand = b; } // Semantic error: wrong chaining
    void display() { cout << brand << " " << price << " " << processor << endl; }
};

int main() {
    Laptop l("HP",1500);
    l.display();
    return 0;
}
