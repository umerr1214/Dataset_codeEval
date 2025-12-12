#include <iostream>
#include <string>
using namespace std;

class SmartCamera {
public:
    string resolution;
    int storageCapacity;
    int batteryLevel;

    void takePhoto() {
        if (batteryLevel > 0) {
            cout << "Photo taken\n";
            batteryLevel--;
        } else {
            cout << "Battery empty\n";
        }
    }

    void recordVideo() {
        if (batteryLevel > 0) {
            cout << "Recording video\n";
            batteryLevel--;
        } else {
            cout << "Battery empty\n";
        }
    }

    void checkBattery() {
        cout << "Battery: " << batteryLevel << "\n";
    }
};

int main() {
    SmartCamera cam;
    cam.resolution = "12MP";
    cam.storageCapacity = 64;
    cam.batteryLevel = 5;

    cam.takePhoto();
    cam.recordVideo();
    cam.checkBattery();

    return 0;
}
