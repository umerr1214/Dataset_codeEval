#include <iostream>
using namespace std;

class Sensor {
public:
    virtual float readValue() {
        return 0  // missing semicolon
    }
};

class TemperatureSensor : public Sensor {
public:
    float readValue() {
        return 25.0;
    }
};

int main() {
    TemperatureSensor t;
    cout << t.readValue() << endl;
    return 0;
}
