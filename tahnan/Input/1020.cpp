#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;
    Time() { hours = minutes = seconds = 0; }
    Time(int h) { hours = h; minutes = 0; seconds = 0; }
    Time(int h, int m) { hours = h; minutes = m; seconds = 0; }
    void display() { cout << hours << ":" << minutes << ":" << seconds << endl; }
};

int main() {
    Time t1;
    Time t2(5);
    Time t3(3, 45);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
