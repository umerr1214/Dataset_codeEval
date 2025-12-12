#include <iostream>
using namespace std;

class SmartPhone {
public:
    void sync(string data){ cout<<"Syncing: "<<data<<endl; }
};

class SmartWatch {
private:
    int steps;
    int heartRate;
    int battery;
public:
    SmartWatch(){ steps=1000; heartRate=70; battery=50; }

    void syncWithPhone(SmartPhone p) {
        // Semantic error: battery updated on local copy, not class member
        int battery = battery - 5;
        p.sync("Fitness Data");
    }

    void displayBattery() { cout<<"Battery: "<<battery<<endl; }
};

int main() {
    SmartWatch sw;
    SmartPhone sp;
    sw.syncWithPhone(sp);
    sw.displayBattery();
    return 0;
}
