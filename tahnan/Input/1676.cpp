#include <iostream>
using namespace std;

class SmartCamera {
public:
    int resolution;
    int storageCapacity;
    int batteryLevel;

    void takePhoto() {
        if(storageCapacity <= 0)
            cout << "Storage full!" << endl;
        else
            cout << "Photo taken." << endl;
    }

    void recordVideo() {
        if(batteryLevel < 5)
            cout << "Battery too low to record!" << endl;
        else
            cout << "Recording video..." << endl;
    }

    void checkBattery() {
        cout << "Battery level: " << batteryLevel << "%" << endl;
    }
};

int main() {
    SmartCamera cam;
    cam.resolution = 12;
    cam.storageCapacity = 0;  // Edge case: storage is zero
    cam.batteryLevel = 3;     // Edge case: very low battery

    cam.takePhoto();
    cam.recordVideo();
    cam.checkBattery();

    return 0;
}
