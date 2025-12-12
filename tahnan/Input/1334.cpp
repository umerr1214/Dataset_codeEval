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
    void addPassenger(Passenger p) {
        passengers.push_back(p);
    }

    void cancelPassenger(string name) {
        // Logical error: removes only first occurrence, not all duplicates
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
    res.addPassenger(Passenger("Alice"));
    res.cancelPassenger("Alice");
    res.displayPassengers();
    return 0;
}
