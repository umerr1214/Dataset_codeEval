#include <iostream>
using namespace std;

class SmartMirror {
public:
    string displayMode;
    int brightness
    double temperature;

    void showWeather() {
        cout << "Temperature: " << temperature << " C" << endl
    }

    void showTime() {
        cout << "Time: 10:00 AM" << endl;
    }

    void adjustBrightness(int level) {
        brightness = level
    }
};

int main() {
    SmartMirror m;
    m.displayMode = "Normal";
    m.brightness = 50;
    m.temperature = 25.5;

    m.showWeather();
    m.adjustBrightness(80);
    m.showTime();

    return 0;
}
