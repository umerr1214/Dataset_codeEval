#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes
    int seconds;
    Time(int h) { hours = h; minutes = 0; seconds = 0; }
    Time(int h, int m) { hours = h; minutes = m; seconds = 0 }
    Time(int h, int m, int s) { hours = h; minutes = m; seconds = s; }
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl
    }
};

int main() {
    Time t1(5);
    Time t2(5,30);
    Time t3(5,30,45);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
