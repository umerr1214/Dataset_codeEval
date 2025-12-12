#include <iostream>
using namespace std;

class Sensor {
public:
    virtual float readValue() 
    {
        return 0;
    }
};

class TemperatureSensor : public Sensor {
public:
    float readValue() 
    {
        return 25;
    }
};

class PressureSensor : public Sensor {
public:
    float readValue() 
    {
        return 101;
    }
};

// SEMANTIC ERROR: derives from unrelated type
class MySensor : public int {};

int main() 
{
    TemperatureSensor t;
    cout << t.readValue() << endl;
    return 0;
}
