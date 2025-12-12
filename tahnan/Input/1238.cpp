#include <iostream>
using namespace std;

class Sensor {
public:
    virtual float readValue() { return 0; }
};

class TemperatureSensor : public Sensor {
public:
    float readValue() { return 20; } // LOGICAL ERROR: should return 25
};

int main() {
    TemperatureSensor t;
    cout << t.readValue() << endl;
    return 0;
}
