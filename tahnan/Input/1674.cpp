#include <iostream>
using namespace std;

class SmartPlantPot {
private: // Semantic issue: waterLevel should be public
    double soilMoisture;
    double waterLevel;
public:
    double sunlightExposure;

    void waterPlant(double amount) {
        waterLevel += amount;
    }

    void adjustSunlight(double level) {
        sunlightExposure = level;
    }

    void displayStatus() {
        cout << "Soil:" << soilMoisture << " Water:" << waterLevel << " Sunlight:" << sunlightExposure << endl;
    }
};

int main() {
    SmartPlantPot pot;
    pot.soilMoisture = 30; // Semantic error: private member accessed
    pot.waterLevel = 10;
    pot.sunlightExposure = 50;

    pot.waterPlant(5);
    pot.adjustSunlight(70);
    pot.displayStatus();

    return 0;
}
