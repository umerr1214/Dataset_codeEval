#include <iostream>
using namespace std;

class Timer {
private:
    static int totalTimers;
    int id;
public:
    Timer() 
    {
        id = totalTimers;
        totalTimers++;
    }

    void start() 
    {
        cout << "Timer started" << endl;
    }

    void stop() 
    {
        cout << "Timer stopped" << endl;
    }

    static int getTotalTimers() 
    {
        return totalTimers;
    }
};

int Timer::totalTimers = 0;

// SEMANTIC ERROR: derives incorrectly
class MyTimer : public int { // cannot derive from int
public:
    void test() 
    {
        cout << "Test Timer" << endl;
    }
};

int main() 
{
    Timer t1;
    t1.start();
    t1.stop();
    cout << "Total Timers: " << Timer::getTotalTimers() << endl;
    return 0;
}
