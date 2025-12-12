#include <iostream>
#include <vector>
using namespace std;

class Car {
public:
    string model;
    bool rented;
    Car(string m) { model = m; rented = false; }
};

class Rental {
    vector<Car> cars;
public:
    void addCar(string m) { cars.push_back(Car(m)); }

    void rentCar(string m) {
        for (auto &c : cars) {
            if (c.model == m && !c.rented) {
                c.rented = true;
                cout << "Rented: " << m << endl;
                return;
            }
        }
        cout << "Car not available" << endl;
    }

    void returnCar(string m) {
        for (auto &c : cars) {
            if (c.model == m && c.rented) {
                c.rented = false;
                cout << "Returned: " << m << endl;
                return;
            }
        }
        cout << "Car not found or not rented" << endl;
    }

    void displayAvailable() {
        for (auto &c : cars) if (!c.rented) cout << c.model << " ";
        cout << endl;
    }
};

int main() {
    Rental r;
    r.addCar("Toyota");
    r.addCar("Honda");
    r.displayAvailable();
    r.rentCar("Toyota");
    r.displayAvailable();
    r.returnCar("Toyota");
    r.displayAvailable();
    return 0;
}
