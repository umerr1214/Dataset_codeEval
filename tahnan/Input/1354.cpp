#include <iostream>
using namespace std;

class Robot {
private:
    int battery;

public:
    Robot() { battery = 100; }

    void moveForward(int units) {
        // Semantic error: uses public access incorrectly, misuses OOP
        battery = battery - units; // should check bounds properly
        cout << "Moved forward " << units << " units\n";
    }

    void recharge() { battery = 100; }

    void displayBattery() { cout << "Battery: " << battery << "%\n"; }
};

int main() {
    Robot r;
    r.moveForward(20);
    r.recharge();
    r.displayBattery();
    return 0;
}
