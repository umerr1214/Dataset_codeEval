#include <iostream>
using namespace std;

class ElectricVehicle {
private: // Semantic error: currentCharge private
    int batteryCapacity;
    int currentCharge;
    double rangePerCharge;

public:
    void chargeBattery(int amount) {
        currentCharge += amount;
    }

    void drive(double distance) {
        if(distance > rangePerCharge * currentCharge / batteryCapacity)
            cout << "Not enough charge!" << endl;
        else
            cout << "Driving " << distance << " km" << endl;
    }
};

int main() {
    ElectricVehicle ev;
    ev.batteryCapacity = 100; // Semantic error: private member accessed
    ev.currentCharge = 50;
    ev.rangePerCharge = 3.0;

    ev.drive(100);
    ev.chargeBattery(30);
    ev.drive(100);

    return 0;
}
