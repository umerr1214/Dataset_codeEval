#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    double price;
    string processor;
public:
    Laptop(string b, double p, string proc) {
        brand = b;
        price = p;
        processor = proc;
    }
    void display() {
        // Logical error: prints price incorrectly
        cout << brand << " " << price + 100 << " " << processor << endl;
    }
};

int main() {
    Laptop l("Dell", 1200, "i7");
    l.display();
    return 0;
}
