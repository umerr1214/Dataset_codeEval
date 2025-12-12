#include <iostream>
#include <vector>
using namespace std;

class Passenger {
public:
    string name;
    Passenger(string n) { name = n; }
};

class Reservation {
private:
    vector<Passenger> passengers;

public:
    void addPassenger(Passenger p) { passengers.push_back(p); }

    void cancelPassenger(string name) {
        // Semantic error: tries to access private member directly from main (OOP misuse)
        for(int i=0;i<passengers.size();i++){
            if(passengers[i].name == name) {
                passengers.erase(passengers.begin() + i);
                break;
            }
        }
    }

    void displayPassengers() {
        for(auto &p:passengers)
            cout << p.name << endl;
    }
};

int main() {
    Reservation res;
    res.addPassenger(Passenger("Alice"));
    res.addPassenger(Passenger("Bob"));
    res.cancelPassenger("Alice");
    res.displayPassengers();
    return 0;
}
