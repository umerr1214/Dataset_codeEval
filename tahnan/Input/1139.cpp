#include <iostream>
using namespace std;

class Engine {
public:
    int power;
    Engine() { power = 0; }
    void start() { power = 100; }
};

class Car {
private:
    Engine e;
public:
    void drive() {
        if(e.power > 0) cout << "Car is moving\n";
        else cout << "Car stopped\n"; // Semantic error: engine not started
    }
};

int main() {
    Car c;
    c.drive();
    return 0;
}
