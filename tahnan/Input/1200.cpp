#include <iostream>
using namespace std;

class Appliance {
public:
    virtual int powerUsage() = 0; // pure virtual function
};

class Fan : public Appliance {
public:
    int powerUsage() override {
        return 50;
    }
};

class AC : public Appliance {
public:
    int powerUsage() override {
        return 200;
    }
};

class Heater : public Appliance {
public:
    int powerUsage() override {
        return 150;
    }
};

int main() {
    Appliance* appliances[3];
    appliances[0] = new Fan();
    appliances[1] = new AC();
    appliances[2] = new Heater();

    for (int i = 0; i < 3; i++) {
        cout << appliances[i]->powerUsage() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete appliances[i];
    }

    return 0;
}
