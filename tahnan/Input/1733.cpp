#include <iostream>
#include <string>
using namespace std;

class AutonomousCar {
public:
    int speed;
    int fuelLevel;
    string route;

    void navigate(string r) {
        route = r;
        cout << "Navigating " << r << "\n";
    }

    void refuel(int f) {
        fuelLevel += f;
        cout << "Refueled " << f << "\n";
    }

    void stop() {
        speed = 0;
        cout << "Car stopped\n";
    }
};

int main() {
    AutonomousCar car;
    car.speed = 60;
    car.fuelLevel = 50;

    car.navigate("RouteA");
    car.refuel(20);
    car.stop();

    return 0;
}
