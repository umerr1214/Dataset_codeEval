#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    double price;
    string processor;

public:
    Laptop() : Laptop("Unknown") {}

    Laptop(string b) : Laptop(b, 0) {}

    Laptop(string b, double p) : brand(b), price(p), processor("i5") {}

    void input() {
        cin >> brand >> price >> processor;
    }

    void display() {
        cout << brand << " " << price << " " << processor << endl;
    }
};

int main() {
    Laptop l;
    l.input();
    l.display();
    return 0;
}
