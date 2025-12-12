#include <iostream>
#include <string>
using namespace std;

class SmartThermostat {
public:
    float currentTemp;
    float targetTemp;
    string mode;

    void adjustTemperature() {
        // Semantic error: misuses mode string as float comparison
        if (mode == "HEAT") {
            if (currentTemp > targetTemp)
                currentTemp += 1;
        } else if (mode == "COOL") {
            if (currentTemp < targetTemp)
                currentTemp -= 1;
        }
    }

    void displayStatus() {
        cout << "Current: " << currentTemp << ", Target: " << targetTemp << ", Mode: " << mode << endl;
    }
};

int main() {
    SmartThermostat t;
    t.currentTemp = 22;
    t.targetTemp = 25;
    t.mode = "HEAT";
    for(int i=0;i<4;i++){ t.displayStatus(); t.adjustTemperature(); }
    return 0;
}
