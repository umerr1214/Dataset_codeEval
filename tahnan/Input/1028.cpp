#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle starts" << endl; }
};

class Car : public Vehicle {
public:
    void start() { cout << "Car starts" << endl; }
};

class Bike : public Vehicle {
public:
    void start() { cout << "Bike starts" << endl; }
};

int main() {
    Car c;
    Bike b;
    c.start();
    b.start();
    return 0;
}
