#include <iostream>
using namespace std;

class TrafficLight {
public:
    string color;

    TrafficLight() { color = "RED"; }

    void next() {
        // redundant loop
        for (int i = 0; i < 1; i++) {
            if (color == "RED")
                color = "GREEN";
            else if (color == "GREEN")
                color = "YELLOW";
            else
                color = "RED";
        }
    }

    void show() { cout << color; }
};

int main() {
    TrafficLight t;
    t.show();
    t.next();
    t.show();
}
