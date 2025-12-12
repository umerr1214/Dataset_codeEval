#include <iostream>
using namespace std;

class Engine {
public:
    int power;
    void start() { power = 0; } // Logical error: engine starts with 0 power
};

class Car {
private:
    Engine e;
public:
    void drive() {
        e.start();
        cout << "Driving with power " << e.power << endl;
    }
};

int main() {
    Car c;
    c.drive();
    return 0;
}
