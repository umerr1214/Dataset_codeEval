#include <iostream>
using namespace std;

class AutonomousCar {
public:
    double speed;
    double fuelLevel;
    string route;

    void navigate() {
        cout << "Navigating on route" << endl; // logic mistake: should print actual route
    }

    void refuel(double amount) {
        fuelLevel -= amount; // logic mistake: decreases fuel instead
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
