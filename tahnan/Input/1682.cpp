#include <iostream>
using namespace std;

class SmartMirror {
public:
    string displayMode;
    int brightness;
    double temperature;

    void showWeather() {
        cout << "Temperature: " << temperature << "C" << endl;
    }

    void showTime() {
        cout << "Time: 10:00 AM" << endl;
    }

    void adjustBrightness(int b) {
        if(b < 0 || b > 100)
            cout << "Invalid brightness!" << endl;
        else {
            brightness = b;
            cout << "Brightness set to " << b << endl;
        }
    }
};

int main() {
    SmartMirror sm;
    sm.displayMode = "Normal";
    sm.brightness = 50;
    sm.temperature = 25.5;

    sm.adjustBrightness(150);  // Edge case
    sm.showWeather();
    sm.showTime();

    return 0;
}
