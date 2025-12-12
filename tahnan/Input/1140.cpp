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
    Appliance* arr[3];
    Fan f; AC a; Heater h;
    arr[0] = &f; arr[1] = &a; arr[2] = &h;
    for(int i=0;i<3;i++)
        cout << arr[i]->powerUsage() << endl;
    return 0;
}
