#include <iostream>
using namespace std;

class Light {
public:
    void on() { cout << "Light ON\n"; }
    void off() { cout << "Light OFF\n"; }
};

class Fan {
public:
    void start() { cout << "Fan START\n"; }
    void stop() { cout << "Fan STOP\n"; }
};

class SmartHome {
private:
    Light light;
    Fan fan;

public:
    void activateLight() { light.off(); } // Logical error: should turn ON
    void deactivateLight() { light.on(); } // Logical error: should turn OFF
    void activateFan() { fan.stop(); } // Logical error: should start
    void deactivateFan() { fan.start(); } // Logical error: should stop
};

int main() {
    SmartHome home;
    home.activateLight();
    home.deactivateLight();
    home.activateFan();
    home.deactivateFan();
    return 0;
}
