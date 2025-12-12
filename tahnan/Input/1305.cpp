#include <iostream>
using namespace std;

class Temperature {
    float c;
public:
    Temperature(float x) { c = x; }

    bool operator>(Temperature t) {
        return c > t.c;
    }

    bool operator<(Temperature t) {
        return c < t.c;
    }
};

int main() {
    Temperature t1(37.5), t2(39.0);
    if (t1 > t2) {
        cout << "t1 hotter" << endl;
    } else {
        cout << "t2 hotter" << endl;
    }
    return 0;
}
