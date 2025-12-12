#include <iostream>
using namespace std;

class WaterBottle {
private:
    int capacity;
    int level;
public:
    WaterBottle(int cap) { capacity = cap; level = 0; }

    void fill(int amt) {
        // Robustness issue: no check for overflow
        level += amt;
        cout << "Filled: " << level << endl;
    }

    void drink(int amt) {
        // Robustness issue: no check for underflow
        level -= amt;
        cout << "Remaining: " << level << endl;
    }
};

int main() {
    WaterBottle wb(1000);
    wb.fill(600);
    wb.drink(700);
    return 0;
}
