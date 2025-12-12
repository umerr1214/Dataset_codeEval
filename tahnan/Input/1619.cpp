#include <iostream>
using namespace std;

class TrafficLight {
private:
    string color;

public:
    TrafficLight() : color("RED") {}

    void next() {
        if (color == "RED")
            color = "GREEN";
        else if (color == "GREEN")
            color = "YELLOW";
        else
            color = "RED";
    }

    string getColor() const { return color; }
};

int main() {
    TrafficLight t;
    cout << t.getColor();
    t.next();
    cout << t.getColor();
}
