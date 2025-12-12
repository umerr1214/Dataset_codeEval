#include <iostream>
using namespace std;

class SmartMirror {
public:
    string displayMode;
    int brightness;
    int temperature;

    void showWeather() {
        cout << "Weather is " << temperature << "C\n";
    }

    void showTime() {
        cout << "Time displayed\n";
    }

    void adjustBrightness(int b) {
        brightness = b;
        cout << "Brightness " << b << "\n";
    }
};

int main() {
    SmartMirror sm;
    sm.displayMode = "Normal";
    sm.brightness = 50;
    sm.temperature = 25;

    sm.showWeather();
    sm.showTime();
    sm.adjustBrightness(80);

    return 0;
}
