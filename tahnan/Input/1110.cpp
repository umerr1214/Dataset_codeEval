#include <iostream>
using namespace std;

class Appliance {
public:
    virtual double powerUsage() = 0
};

class Fan : public Appliance {
public:
    double powerUsage() {
        return 50
    }
};

class AC : public Appliance {
public:
    double powerUsage() {
        return 100
    }
};

int main() {
    Appliance* a[2];
    Fan f;
    AC ac;
    a[0] = &f
    a[1] = &ac
    for(int i=0;i<2;i++)
        cout << a[i]->powerUsage() << endl
    return 0;
}
