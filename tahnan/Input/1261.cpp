#include <iostream>
#include <vector>
using namespace std;

class Car {
public:
    string name;
    bool available;
    Car(string n) 
    {
        name = n;
        available = true;
    }
};

class Rental {
private:
    vector<Car> cars;
public:
    void addCar(Car c) 
    {
        cars.push_back(c);
    }

    void rent(string carName) 
    {
        for(int i = 0; i < cars.size(); i++)
        {
            if(cars[i].name == carName) 
            {
                if(cars[i].available) 
                {
                    cars[i].available = false;
                    cout << carName << " rented\n";
                    return;
                } 
                else 
                {
                    cout << carName << " not available\n";
                    return;
                }
            }
        }
        cout << carName << " not found\n"; // robustness issue
    }

    void displayAvailable() 
    {
        for(int i = 0; i < cars.size(); i++)
        {
            if(cars[i].available)
            {
                cout << cars[i].name << " ";
            }
        }
        cout << endl;
    }
};

int main() 
{
    Rental r;
    r.addCar(Car("Honda"));
    r.addCar(Car("Toyota"));
    r.rent("Honda");
    r.rent("Ford"); // robustness: invalid car
    r.displayAvailable();
    return 0;
}
