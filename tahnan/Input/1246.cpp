#include <iostream>
#include <vector>
using namespace std;

class Car {
public:
    string name;
    bool rented;
    Car(string n) 
    {
        name = n;
        rented = false;
    }
};

class Rental {
public:
    vector<Car> cars;
    void addCar(Car c) 
    {
        cars.push_back(c);
    }

    void rent(string n) 
    {
        for(int i = 0; i < cars.size(); i++) 
        {
            if(cars[i].name == n && !cars[i].rented) 
            {
                cars[i].rented = true;
                cout << n << " rented\n";
                return;
            }
        }
        cout << n << " not available\n";
    }
};

// SEMANTIC ERROR: inherits unrelated type
class MyRental : public int {};

int main() 
{
    Rental r;
    r.addCar(Car("BMW"));
    r.rent("BMW");
    return 0;
}
