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
    int c,b;
    cin >> c >> b;
    if(c<0 || b<0) { cout << "Invalid input\n"; return 0; }
    Car car;
    Bike bike;
    cout << "Car started\n";
    cout << "Bike started\n";
    return 0;
}
