#include <iostream>
using namespace std;

class SmartCamera {
private:
    int resolution;
    int storageCapacity;
    int batteryLevel;

public:
    void takePhoto() {
        cout << "Photo taken at resolution " << resolution << endl; // resolution is private
    }

    void recordVideo() {
        cout << "Recording video..." << endl;
    }

    void checkBattery() {
        cout << "Battery level: " << batteryLevel << "%" << endl; // batteryLevel is private
    }
};

int main() {
    SmartCamera cam;
    cam.resolution = 1080;  // Semantic error: cannot access private member
    cam.storageCapacity = 64; // Semantic error
    cam.batteryLevel = 85; // Semantic error

    cam.takePhoto();
    cam.recordVideo();
    cam.checkBattery();

    return 0;
}
