#include <iostream>
#include <string>
using namespace std;

class SmartThermostat {
private:
    float currentTemp;
    float targetTemp;
    string mode;

public:
    SmartThermostat(float c, float t, string m){ currentTemp=c; targetTemp=t; mode=m; }

    void adjustTemperature() {
        if(mode=="HEAT"){
            if(currentTemp < targetTemp) currentTemp += 1;
        } else if(mode=="COOL"){
            if(currentTemp > targetTemp) currentTemp -= 1;
        }
        // Robustness issue: no check for invalid mode
    }

    void displayStatus(){ cout<<"Current: "<<currentTemp<<", Target: "<<targetTemp<<", Mode: "<<mode<<endl; }
};

int main() {
    SmartThermostat t(22,25,"HEAT");
    for(int i=0;i<4;i++){ t.displayStatus(); t.adjustTemperature(); }
    return 0;
}
