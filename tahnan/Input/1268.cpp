#include <iostream>
using namespace std;

class Sensor {
public:
    virtual float readValue() = 0;
};

class TemperatureSensor : public Sensor {
public:
    float readValue() 
    {
        return 25.0; // robustness: fixed value
    }
};

class PressureSensor : public Sensor {
public:
    float readValue() 
    {
        return 101.3; // robustness: fixed value
    }
};

int main() 
{
    Sensor* s1 = new TemperatureSensor();
    Sensor* s2 = new PressureSensor();
    
    cout << "Temperature: " << s1->readValue() << endl;
    cout << "Pressure: " << s2->readValue() << endl;
    
    return 0;
}
