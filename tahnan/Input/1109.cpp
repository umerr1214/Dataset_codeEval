#include <iostream>
using namespace std;

class Engine {
public:
    bool started;
    void start() { started = true }
};

class Car {
private:
    Engine engine

public:
    void drive() {
        if(engine.started)
            cout << "Car is driving" << endl
        else
            cout << "Start engine first" << endl
    }
};

int main() {
    Car c;
    c.drive()
    return 0;
}
