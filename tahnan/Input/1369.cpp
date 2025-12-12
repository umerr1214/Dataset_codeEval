#include <iostream>
using namespace std;

class Robot {
private:
    int battery;
public:
    Robot() { battery = 100; }

    void moveForward(int units) {
        // Robustness issue: no battery check
        battery -= units*5;
        cout << "Moved " << units << " units\n";
    }

    void recharge() { battery = 100; }

    void displayBattery() { cout << "Battery: " << battery << "%\n"; }
};

int main() {
    Robot r;
    r.moveForward(10);
    r.moveForward(30); // may drain battery below 0
    r.displayBattery();
    return 0;
}
