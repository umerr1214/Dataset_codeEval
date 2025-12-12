#include <iostream>
using namespace std;

class SmartThermostat {
private:
    int currentTemp;
    int targetTemp;
    string mode;

public:
    SmartThermostat(int c, int t, string m) : currentTemp(c), targetTemp(t), mode(m) {}

    void adjust() {
        if (mode == "HEAT" && currentTemp < targetTemp)
            currentTemp++;
        else if (mode == "COOL" && currentTemp > targetTemp)
            currentTemp--;
    }

    int getCurrentTemp() const { return currentTemp; }
};

int main() {
    SmartThermostat s(20, 25, "HEAT");
    s.adjust();
    s.adjust();
    s.adjust();
    cout << s.getCurrentTemp();
}
