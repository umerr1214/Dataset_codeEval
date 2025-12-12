#include <iostream>
using namespace std;

class WaterBottle {
private:
    double capacity;
    double current;

public:
    WaterBottle(double c) { capacity = c; current = 0; }

    void fill(double amount) {
        current += amount;
        // Logical error: allows overflow
    }

    void drink(double amount) {
        current -= amount;
        if(current < 0) current = 0;
    }

    void display() {
        cout << "Current level: " << current << endl;
    }
};

int main() {
    WaterBottle wb(100);
    wb.fill(120); // Overflow
    wb.drink(10);
    wb.display();
    return 0;
}
