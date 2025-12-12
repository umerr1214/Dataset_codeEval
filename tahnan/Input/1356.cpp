#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h, int m, int s) { hours = h; minutes = m; seconds = s; }

    void display() {
        // Semantic error: prints in wrong format (misuses OOP principle)
        cout << hours + minutes + seconds << endl;
    }
};

int main() {
    Time t(2,30,15);
    t.display();
    return 0;
}
