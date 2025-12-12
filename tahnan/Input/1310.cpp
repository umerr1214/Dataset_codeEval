#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void info() {
        cout << "SmartDevice info" << endl;
    }
};

class SmartPhone : virtual public SmartDevice {
public:
    void info() {
        cout << "SmartPhone info" << endl;
    }
};

class SmartWatch : virtual public SmartDevice {
public:
    void info() {
        cout << "SmartWatch info" << endl;
    }
};

int main() {
    SmartDevice* devices[2];
    devices[0] = new SmartPhone();
    devices[1] = new SmartWatch();
    for(int i = 0; i < 2; i++) {
        devices[i]->info();
    }
    return 0;
}
