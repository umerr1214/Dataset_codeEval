#include <iostream>
using namespace std;

class SmartPlantPot {
public:
    double soilMoisture;
    double waterLevel;
    double sunlightExposure;

    void waterPlant(double amount) {
        waterLevel -= amount; // logic mistake: decreases instead of increases
    }

    void adjustSunlight(double level) {
        sunlightExposure = level + 10; // logic mistake
    }

    void displayStatus() {
        cout << "Soil:" << soilMoisture << " Water:" << waterLevel << " Sunlight:" << sunlightExposure << endl;
    }
};

int main() {
    SmartPlantPot pot;
    pot.soilMoisture = 30;
    pot.waterLevel = 10;
    pot.sunlightExposure = 50;

    pot.waterPlant(5);
    pot.adjustSunlight(70);
    pot.displayStatus();

    return 0;
}
