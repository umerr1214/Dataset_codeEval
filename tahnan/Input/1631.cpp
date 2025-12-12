#include <iostream>
using namespace std;

class SmartCamera {
public:
    int resolution
    int storageCapacity;
    int batteryLevel;

    void takePhoto() {
        cout << "Photo taken at resolution " << resolution << endl
    }

    void recordVideo() {
        cout << "Recording video..." << endl;
    }

    void checkBattery() {
        cout << "Battery level: " << batteryLevel << "%" << endl;
    }
};

int main() {
    SmartCamera cam;
    cam.resolution = 1080;
    cam.storageCapacity = 64;
    cam.batteryLevel = 85;

    cam.takePhoto();
    cam.recordVideo();
    cam.checkBattery();

    return 0;
}
