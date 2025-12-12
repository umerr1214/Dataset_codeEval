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
    Car cars[2] = {Car("A"), Car("B")};
public:
    void rentCar(int i) {
        if (cars[i].available) {
            cars[i].available = true; // LOGICAL ERROR: should be false
            cout << "Car rented\n";
        } else {
            cout << "Not available\n";
        }
    }

    void display() {
        for (int i=0; i<2; i++)
            cout << cars[i].model << " " << cars[i].available << endl;
    }
};

int main() {
    Rental r;
    r.rentCar(0);
    r.display();
    return 0;
}
