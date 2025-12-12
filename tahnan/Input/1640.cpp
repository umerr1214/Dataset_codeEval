#include <iostream>
using namespace std;

class Drone {
public:
    double altitude;
    double speed
    int batteryLevel;

    void takeOff() {
        cout << "Drone taking off..." << endl
        altitude = 10;
    }

    void land() {
        cout << "Drone landing..." << endl;
        altitude = 0;
    }

    void flyTo(double x, double y, double z) {
        cout << "Flying to (" << x << "," << y << "," << z << ")" << endl;
        altitude = z;
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
