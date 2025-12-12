#include <iostream>
using namespace std;

class Appliance {
public:
    virtual double powerUsage() = 0;
};

class Fan : public Appliance {
public:
    double powerUsage() { return 200; } // Logical error: should be 50
};

class AC : public Appliance {
public:
    double powerUsage() { return 500; } // Logical error: should be 1000
};

class Heater : public Appliance {
public:
    double powerUsage() { return 800; }
};

int main() {
    Appliance* apps[3];
    Fan f; AC a; Heater h;
    apps[0] = &f; apps[1] = &a; apps[2] = &h;
    for(int i=0;i<3;i++)
        cout << apps[i]->powerUsage() << endl;
    return 0;
}
