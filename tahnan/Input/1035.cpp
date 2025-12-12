#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;
    Time() { hours = minutes = seconds = 0; }
    Time(int h) { hours = h; minutes = 0; seconds = 0; }
    Time(int h, int m) { hours = h; minutes = m; seconds = 0; }
    Time(int h, int m, int s) { hours = h; minutes = m; seconds = s; }
    void display() { cout << hours << ":" << minutes << ":" << seconds << endl; }
};

int main() {
    Time t1;
    Time t2(5);
    Time t3(3, 45);
    Time t4(2, 30, 15);
    t1.display();
    t2.display();
    t3.display();
    t4.display();
    return 0;
}
