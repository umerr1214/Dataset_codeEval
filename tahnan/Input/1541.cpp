#include <iostream>
#include <string>
using namespace std;

class SmartThermostat {
private:
    float currentTemp;
    float targetTemp;
    string mode;
public:
    SmartThermostat(float curr, float target, string m) {
        currentTemp = curr;
        targetTemp = target;
        mode = m;
    }

    void adjustTemperature() {
        // Logical error: decreases in HEAT mode instead of increasing
        if (mode == "HEAT") {
            if (currentTemp < targetTemp)
                currentTemp -= 1;
        } else if (mode == "COOL") {
            if (currentTemp > targetTemp)
                currentTemp += 1;
        }
    }

    void displayStatus() {
        cout << "Current: " << currentTemp << ", Target: " << targetTemp << ", Mode: " << mode << endl;
    }
};

int main() {
    SmartThermostat t(22, 25, "HEAT");
    for (int i = 0; i < 4; i++) {
        t.displayStatus();
        t.adjustTemperature();
    }
    return 0;
}
