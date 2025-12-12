#include <iostream>
#include <string>
using namespace std;

class SmartPhone {
public:
    void sync() {
        cout << "Phone synced\n";
    }
};

class SmartWatch {
private:
    int steps;
    int hr;
    int battery;

public:
    SmartWatch(int s, int h, int b) : steps(s), hr(h), battery(b) {}

    void consumeBattery(int amount) {
        // Robustness issue → battery may go negative
        battery -= amount;
    }

    void syncWithPhone(SmartPhone &p) {
        p.sync();
        consumeBattery(10);
    }

    void show() {
        cout << "Steps: " << steps << ", HR: " << hr << ", Battery: " << battery << endl;
    }
};

int main() {
    SmartPhone ph;
    SmartWatch sw(5000, 80, 50);

    sw.syncWithPhone(ph);
    sw.show();

    return 0;
}
