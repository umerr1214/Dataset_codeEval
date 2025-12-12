#include <iostream>
using namespace std;

class Drone {
public:
    double altitude;
    double speed;
    double batteryLevel;

    void takeOff() {
        if(batteryLevel < 10) cout << "Battery too low to take off!" << endl;
        else {
            altitude = 10;
            cout << "Drone taking off..." << endl;
        }
    }

    void land() {
        altitude = 0;
        cout << "Drone landed." << endl;
    }

    void flyTo(double x, double y, double z) {
        if(batteryLevel < 5) cout << "Battery too low to fly!" << endl;
        else {
            altitude = z;
            cout << "Flying to (" << x << "," << y << "," << z << ")" << endl;
        }
    }
};

int main() {
    Drone d;
    d.batteryLevel = 8;

    d.takeOff();            // Edge: low battery
    d.flyTo(10, 20, 30);    // Edge: low battery
    d.batteryLevel = 50;
    d.takeOff();            // Normal
    d.flyTo(10, 20, 30);

    return 0;
}
