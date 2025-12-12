#include <iostream>
#include <vector>
using namespace std;

class Passenger {
public:
    string name;
    Passenger(string n) {
        name = n;
    }
};

class Reservation {
    vector<Passenger> seats;
    int capacity;
public:
    Reservation(int c) {
        capacity = c;
    }
    
    void book(Passenger p) {
        if(seats.size() < capacity) {
            seats.push_back(p);
        } else {
            cout << "Full" << endl;
        }
    }
    
    void show() {
        for(int i = 0; i < seats.size(); i++) {
            cout << seats[i].name << " ";
        }
        cout << endl;
    }
};

int main() {
    Reservation r(2);
    r.book(Passenger("Alice"));
    r.book(Passenger("Bob"));
    r.book(Passenger("Charlie"));
    r.show();
    return 0;
}
