#include <iostream>
using namespace std;

class SmartThermostat {
public:
    int currentTemp, targetTemp;
    string mode;

    SmartThermostat(int c, int t, string m) {
        currentTemp = c;
        targetTemp = t;
        mode = m;
    }

    void adjust() {
        // inefficient: loop runs once unnecessarily
        for (int i = 0; i < 1; i++) {
            if (mode == "HEAT") {
                if (currentTemp < targetTemp)
                    currentTemp++;
            } else {
                if (currentTemp > targetTemp)
                    currentTemp--;
            }
        }
    }
};

int main() {
    SmartThermostat s(20, 25, "HEAT");

    // repeated adjustments unnecessarily
    for (int i = 0; i < 3; i++)
        s.adjust();

    cout << s.currentTemp;
}
