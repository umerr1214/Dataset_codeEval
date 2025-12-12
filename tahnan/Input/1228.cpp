#include <iostream>
using namespace std;

class Timer {
private:
    static int totalTimers;
    int time;
public:
    Timer() { time = 0; totalTimers++; }
    void start() {
        cout << "Timer Started" << endl;
        time = time + 1; // LOGICAL ERROR: incrementing time incorrectly
    }
    void stop() { cout << "Timer Stopped" << endl; }
    void reset() { time = 0; }
};

int Timer::totalTimers = 0;

int main() {
    Timer t1;
    t1.start();
    t1.stop();
    cout << "Total timers: " << Timer::totalTimers << endl;
    return 0;
}
