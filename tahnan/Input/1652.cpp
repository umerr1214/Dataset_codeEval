#include <iostream>
using namespace std;

class SmartMirror {
public:
    string displayMode;
    int brightness;
    double temperature;

    void showWeather() {
        cout << "Temperature: " << temperature + 5 << " C" << endl; // logic mistake
    }

    void showTime() {
        cout << "Time: 10:00 AM" << endl;
    }

    void adjustBrightness(int level) {
        brightness = level - 10; // logic mistake
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
