#include <iostream>
using namespace std;

class SmartPlantPot {
public:
    int soilMoisture;
    int waterLevel;
    int sunlightExposure;

    void waterPlant(int amount) {
        waterLevel += amount;
        if(waterLevel > 100) cout << "Overwatered!" << endl;
        else cout << "Watered plant." << endl;
    }

    void adjustSunlight(int hours) {
        if(hours < 0) cout << "Invalid sunlight!" << endl;
        else sunlightExposure = hours;
    }

    void displayStatus() {
        cout << "Soil:" << soilMoisture << " Water:" << waterLevel << " Sunlight:" << sunlightExposure << endl;
    }
};

int main() {
    SmartPlantPot pot;
    pot.soilMoisture = 50;
    pot.waterLevel = 90;
    pot.sunlightExposure = 5;

    pot.waterPlant(20); // Edge: overwatered
    pot.adjustSunlight(-3); // Edge: invalid sunlight
    pot.displayStatus();

    return 0;
}
