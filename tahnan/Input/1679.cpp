#include <iostream>
using namespace std;

class ElectricVehicle {
public:
    double batteryCapacity;
    double currentCharge;
    double rangePerCharge;

    void chargeBattery(double amount) {
        if(currentCharge + amount > batteryCapacity)
            cout << "Cannot overcharge battery!" << endl;
        else
            currentCharge += amount;
    }

    void drive(double distance) {
        if(distance > currentCharge * rangePerCharge)
            cout << "Not enough charge to drive!" << endl;
        else
            cout << "Driving " << distance << " km." << endl;
    }
};

int main() {
    ElectricVehicle ev;
    ev.batteryCapacity = 100;
    ev.currentCharge = 90;
    ev.rangePerCharge = 2;  // km per unit charge

    ev.chargeBattery(20);   // Edge case: overcharge
    ev.drive(250);          // Edge case: exceeds current charge
    ev.drive(50);           // Normal drive

    return 0;
}
