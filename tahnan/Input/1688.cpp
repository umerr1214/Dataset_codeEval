#include <iostream>
#include <string>
using namespace std;

class AutonomousCar {
public:
    double speed;
    double fuelLevel;
    string route;

    void navigate(string r) {
        if(fuelLevel < 10) cout << "Fuel too low to navigate!" << endl;
        else {
            route = r;
            cout << "Navigating " << r << endl;
        }
    }

    void refuel(double amount) {
        fuelLevel += amount;
        cout << "Refueled " << amount << " liters" << endl;
    }

    void stop() {
        speed = 0;
        cout << "Car stopped." << endl;
    }
};

int main() {
    AutonomousCar car;
    car.fuelLevel = 5;

    car.navigate("CityA to CityB"); // Edge: low fuel
    car.refuel(20);
    car.navigate("CityA to CityB"); // Normal
    car.stop();

    return 0;
}
