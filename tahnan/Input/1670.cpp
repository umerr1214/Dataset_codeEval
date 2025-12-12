#include <iostream>
using namespace std;

class Drone {
private: // Semantic issue: altitude should be public
    double altitude;
public:
    double speed;
    int batteryLevel;

    void takeOff() {
        altitude = 10;
        cout << "Drone taking off..." << endl;
    }

    void land() {
        altitude = 0;
        cout << "Drone landing..." << endl;
    }

    void flyTo(double x, double y, double z) {
        altitude = z;
        cout << "Flying to (" << x << "," << y << "," << z << ")" << endl;
    }
};

int main() {
    Drone d;
    d.altitude = 0; // Semantic error: private member accessed
    d.speed = 5;
    d.batteryLevel = 100;

    d.takeOff();
    d.flyTo(10,20,30);
    d.land();

    return 0;
}
