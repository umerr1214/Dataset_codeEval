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
    void activateLight() { light.start(); } // Semantic error: Light has no 'start' method
    void deactivateLight() { light.off(); }
    void activateFan() { fan.start(); }
    void deactivateFan() { fan.stop(); }
};

int main() {
    SmartHome home;
    home.activateLight();
    home.deactivateLight();
    home.activateFan();
    home.deactivateFan();
    return 0;
}
