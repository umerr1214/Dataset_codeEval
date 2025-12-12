#include <iostream>
using namespace std;

class Robot {
private:
    int battery;

public:
    Robot() { battery = 100; }

    void move() { battery -= 10; cout << "Moved\n"; }
    void turn() { battery -= 5; cout << "Turned\n"; }
    void recharge() { battery = 100; cout << "Recharged\n" }

    void displayBattery() { cout << "Battery: " << battery << endl; }
};

int main() {
    Robot r;
    r.move();
    r.turn();
    r.recharge();
    r.displayBattery();
    return 0;
}
