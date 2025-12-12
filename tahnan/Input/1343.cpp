#include <iostream>
using namespace std;

class Robot {
private:
    int battery; // 0–100

public:
    Robot() { battery = 100; }

    void moveForward(int units) {
        battery -= units * 2; // Logical error: consumes double the energy
        if(battery < 0) battery = 0;
        cout << "Moved forward " << units << " units\n";
    }

    void recharge() { battery += 20; if(battery>100) battery=100; }

    void displayBattery() { cout << "Battery: " << battery << "%\n"; }
};

int main() {
    Robot r;
    r.moveForward(10);
    r.recharge();
    r.displayBattery();
    return 0;
}
