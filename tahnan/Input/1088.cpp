#include<iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle started" << endl; }
};
class Car : virtual public Vehicle {
public:
    void drive() { cout << "Car driving" << endl; }
};
class Bike : virtual public Vehicle {
public:
    void ride() { cout << "Bike riding" << endl; }
};
class Hybrid : public Car, public Bike {
public:
    void show() { cout << "Hybrid active" << endl; }
};
int main(){
    Hybrid h;
    h.start();
    h.drive();
    h.ride();
    h.show();
    return 0;
}
