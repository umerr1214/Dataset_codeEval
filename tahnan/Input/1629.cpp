#include <iostream>
using namespace std;

class SmartPhone {};

class SmartWatch {
private:
    int battery;

public:
    int steps, heartRate;

    SmartWatch() : steps(0), heartRate(0), battery(100) {}

    void sync(SmartPhone &p) { battery -= 1; }
    int getBattery() const { return battery; }
};

int main() {
    SmartWatch w;
    SmartPhone p;
    w.sync(p);
    cout << w.getBattery();
}
