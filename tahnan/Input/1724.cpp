#include <iostream>
using namespace std;

class ElectricVehicle {
public:
    int batteryCapacity;
    int currentCharge;
    int rangePerCharge;

    void chargeBattery(int c) {
        currentCharge += c;

        if (currentCharge > batteryCapacity) {
            currentCharge = batteryCapacity;
        }

        cout << "Charged " << c << "\n";
    }

    void drive(int distance) {
        if (distance > rangePerCharge) {
            cout << "Cannot drive\n";
        } else {
            cout << "Driving " << distance << "\n";
        }
    }
};

int main() {
    ElectricVehicle ev;
    ev.batteryCapacity = 100;
    ev.currentCharge = 50;
    ev.rangePerCharge = 40;

    ev.chargeBattery(20);
    ev.drive(30);

    return 0;
}
