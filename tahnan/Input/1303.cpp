#include <iostream>
using namespace std;

class Timer {
    static int totalTimers;
    bool running;
public:
    Timer() { running = false; totalTimers++; }

    void start() {
        if (!running) {
            running = true;
            cout << "Timer started" << endl;
        }
    }

    void stop() {
        if (running) {
            running = false;
            cout << "Timer stopped" << endl;
        }
    }

    void reset() {
        running = false;
        cout << "Timer reset" << endl;
    }

    static int getTotalTimers() {
        return totalTimers;
    }
};

int Timer::totalTimers = 0;

int main() {
    Timer t1, t2;
    t1.start();
    t1.stop();
    t2.reset();
    cout << "Total timers: " << Timer::getTotalTimers() << endl;
    return 0;
}
