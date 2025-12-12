#include <iostream>
using namespace std;

class SmartMirror {
private: // Semantic error: brightness should be public
    int brightness;
public:
    string displayMode;
    double temperature;

    void showWeather() {
        cout << "Temperature: " << temperature << " C" << endl;
    }

    void showTime() {
        cout << "Time: 10:00 AM" << endl;
    }

    void adjustBrightness(int level) {
        brightness = level;
    }
};

int main() {
    SmartMirror m;
    m.displayMode = "Normal";
    m.brightness = 50; // Semantic error: private member accessed
    m.temperature = 25.5;

    m.showWeather();
    m.adjustBrightness(80);
    m.showTime();

    return 0;
}
