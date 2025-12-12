#include <iostream>
using namespace std;

class Sensor {
public:
    virtual float readValue() = 0;
};

class TemperatureSensor : public Sensor {
public:
    float readValue() {
        return 36.5;
    }
};

class PressureSensor : public Sensor {
public:
    float readValue() {
        return 101.3;
    }
};

int main() {
    Sensor* s[2];
    s[0] = new TemperatureSensor();
    s[1] = new PressureSensor();
    for(int i = 0; i < 2; i++)
        cout << s[i]->readValue() << endl;
    return 0;
}
