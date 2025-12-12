#include <iostream>
using namespace std;

class Appliance {
public:
    virtual double powerUsage() = 0;
};

class Fan : public Appliance {
public:
    double powerUsage() { return 50; }
};

class AC : public Appliance {
public:
    double powerUsage() { return 100; }
};

class Heater : public Appliance {
public:
    double powerUsage() { return 150; }
};

int main() {
    Appliance* arr[3] = {new Fan(), new AC(), new Heater()};
    for(int i=0;i<3;i++) cout << arr[i]->powerUsage() << endl;
    return 0;
}
