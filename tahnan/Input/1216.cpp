#include <iostream>
using namespace std;

class Car {
public:
    string model;
    bool available;
    Car(string m) { model = m; available = true; }
};

class Rental {
private:
    Car cars[5];
public:
    void rentCar(int i) { if (cars[i].available) cars[i].available = false; else cout << "Not available" << endl } // missing semicolon
};

int main() {
    Rental r;
    r.rentCar(0);
    return 0;
}
