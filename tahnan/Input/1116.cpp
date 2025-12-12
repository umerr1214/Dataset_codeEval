#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    double price;
    string processor

public:
    Laptop() {
        brand = "Unknown";
        price = 0;
        processor = "None"
    }

    Laptop(string b, double p, string proc) {
        brand = b;
        price = p;
        processor = proc
    }

    void display() {
        cout << brand << " " << price << " " << processor << endl
    }
};

int main() {
    Laptop l1("Dell", 1200, "i7")
    l1.display()
    return 0;
}
