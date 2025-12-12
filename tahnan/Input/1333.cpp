#include <iostream>
using namespace std;

class Light {
public:
    void on() { cout << "Light ON\n"; }
    void off() { cout << "Light OFF\n"; }
};

class SmartHome {
private:
    Light light;

public:
    void switchOn() { light.off(); } // Logical error: turns off instead of on
    void switchOff() { light.on(); } // Logical error: turns on instead of off
};

int main() {
    SmartHome home;
    home.switchOn();
    home.switchOff();
    return 0;
}
