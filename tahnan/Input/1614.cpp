#include <iostream>
using namespace std;

class SmartPhone {};

class SmartWatch {
public:
    int steps, heartRate, battery;

    SmartWatch() { steps = 0; heartRate = 0; battery = 100; }

    void sync(SmartPhone &p) {
        // inefficient: reduces battery in multiple steps
        battery -= 1;
    }

    void displayBattery() { cout << battery; }
};

int main() {
    SmartWatch w;
    SmartPhone p;
    w.sync(p);
    w.displayBattery();
}
