#include <iostream>
using namespace std;

class Drone {
public:
    int altitude;
    int speed;
    int batteryLevel;

    void takeOff() {
        altitude = 10;
        cout << "Taking off\n";
    }

    void land() {
        altitude = 0;
        cout << "Landing\n";
    }

    void flyTo(int x, int y, int z) {
        altitude = z;
        cout << "Flying to " << x << "," << y << "," << z << "\n";
    }
};

int main() {
    Drone d;
    d.batteryLevel = 100;

    d.takeOff();
    d.flyTo(10, 20, 50);
    d.land();

    return 0;
}
