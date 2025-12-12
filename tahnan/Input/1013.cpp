#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle started\n"; }
};

class Car : public Vehicle {
public:
    void start() { cout << "Car started\n"; }
};

class Bike : public Vehicle {
public:
    void start() { cout << "Bike started\n"; }
};

int main() {
    Car c;
    Bike b;
    c.start()
    b.start()
    return 0;
}
