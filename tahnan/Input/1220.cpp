#include <iostream>
using namespace std;

class SmartDevice {
public:
    void turnOn() {
        cout << "Device On" << endl  // missing semicolon
    }
};

class SmartPhone : virtual public SmartDevice {
};

class SmartWatch : virtual public SmartDevice {
};

int main() {
    SmartPhone sp;
    sp.turnOn();
    return 0;
}
