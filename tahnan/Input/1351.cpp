#include <iostream>
using namespace std;

class WaterBottle {
private:
    double capacity;
    double current;

public:
    WaterBottle(double c) { capacity = c; current = 0; }

    void fill(double amount) {
        // Semantic error: direct assignment bypasses encapsulation rules
        current = current + amount;
    }

    void drink(double amount) {
        if(current - amount >= 0) current -= amount;
        else current = 0;
    }

    void display() { cout << "Current level: " << current << endl; }
};

int main() {
    WaterBottle wb(100);
    wb.fill(50);
    wb.drink(20);
    wb.display();
    return 0;
}
