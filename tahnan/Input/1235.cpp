#include <iostream>
using namespace std;

class SmartDevice {
public:
    void turnOn() {
        cout << "Device On\n";
    }
};

class SmartPhone : virtual public SmartDevice {
public:
    void turnOn() {
        cout << "Phone On\n"; // LOGICAL ERROR: doesn't call base class function
    }
};

int main() {
    SmartPhone sp;
    sp.turnOn();
    return 0;
}
