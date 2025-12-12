#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle started" << endl; }
};

class Car : public Vehicle {
public:
    void start() { cout << "Car started" << endl; }
};

class Bike : public Vehicle {
public:
    void start() { cout << "Bike started" << endl; }
};

int main() {
    Car c;
    Bike b;
    c.start();
    b.start();
    return 0;
}
