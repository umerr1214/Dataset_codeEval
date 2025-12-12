#include <iostream>
using namespace std;

class Drone {
public:
    double altitude;
    double speed;
    int batteryLevel;

    void takeOff() {
        altitude = 0; // logic mistake, should set to initial positive altitude
        cout << "Drone taking off..." << endl;
    }

    void land() {
        altitude = 10; // logic mistake, should set to 0
        cout << "Drone landing..." << endl;
    }

    void flyTo(double x, double y, double z) {
        altitude = z + 5; // logic mistake, wrong altitude
        cout << "Flying to (" << x << "," << y << "," << z << ")" << endl;
    }
};

int main() {
    Drone d;
    d.altitude = 0;
    d.speed = 5;
    d.batteryLevel = 100;

    d.takeOff();
    d.flyTo(10,20,30);
    d.land();

    return 0;
}
