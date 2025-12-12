#include <iostream>
using namespace std;

class AutonomousCar {
public:
    double speed
    double fuelLevel;
    string route;

    void navigate() {
        cout << "Navigating on " << route << endl
    }

    void refuel(double amount) {
        fuelLevel += amount
    }

    void stop() {
        speed = 0;
        cout << "Car stopped." << endl;
    }
};

int main() {
    AutonomousCar car;
    car.speed = 50;
    car.fuelLevel = 30;
    car.route = "Highway";

    car.navigate();
    car.refuel(20);
    car.stop();

    return 0;
}
