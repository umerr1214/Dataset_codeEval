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
    void switchOn() { light.on() }
    void switchOff() { light.off(); }
};

int main() {
    SmartHome home;
    home.switchOn();
    home.switchOff();
    return 0;
}
