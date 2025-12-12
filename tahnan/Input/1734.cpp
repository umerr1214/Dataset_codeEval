#include <iostream>
using namespace std;

class SmartPlantPot {
public:
    int soilMoisture;
    int waterLevel;
    int sunlightExposure;

    void waterPlant(int w) {
        waterLevel += w;
        cout << "Watered " << w << "\n";
    }

    void adjustSunlight(int s) {
        sunlightExposure = s;
        cout << "Sunlight adjusted to " << s << "\n";
    }

    void displayStatus() {
        cout << "Soil: " << soilMoisture 
             << " Water: " << waterLevel 
             << " Sunlight: " << sunlightExposure << "\n";
    }
};

int main() {
    SmartPlantPot pot;
    pot.soilMoisture = 40;
    pot.waterLevel = 10;
    pot.sunlightExposure = 50;

    pot.waterPlant(20);
    pot.adjustSunlight(70);
    pot.displayStatus();

    return 0;
}
