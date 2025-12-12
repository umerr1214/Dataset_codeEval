#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    void input() {
        cin >> horsepower;
    }

    int getHorsepower() {
        return horsepower;
    }
};

class Car {
private:
    Engine engine;

public:
    void input() {
        engine.input();
    }

    void display() {
        cout << "Car with engine horsepower: " << engine.getHorsepower() << endl;
    }
};

int main() {
    Car car;
    car.input();
    car.display();
    return 0;
}
