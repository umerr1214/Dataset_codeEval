#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;
public:
    Temperature(float c) { celsius = c; }
    bool operator>(Temperature t) { return celsius >= t.celsius; } // LOGICAL ERROR: should be >
    bool operator<(Temperature t) { return celsius < t.celsius; }
};

int main() {
    Temperature t1(37), t2(39);
    if (t1 > t2)
        cout << "t1 hotter\n";
    else
        cout << "t2 hotter\n";
    return 0;
}
