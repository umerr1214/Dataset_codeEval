#include <iostream>
using namespace std;

class Timer {
private:
    int seconds;
public:
    static int totalTimers;
    Timer() 
    {
        seconds = 0;
        totalTimers++;
    }

    void start() 
    {
        seconds = 1; // robustness issue: no real timing
    }

    void stop() 
    {
        seconds = 0;
    }

    void reset() 
    {
        seconds = 0;
    }

    int getTime() 
    {
        return seconds;
    }
};

int Timer::totalTimers = 0;

int main() 
{
    Timer t1;
    t1.start();
    cout << "Timer: " << t1.getTime() << endl;
    cout << "Total timers: " << Timer::totalTimers << endl;
    return 0;
}
