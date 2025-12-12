#include <iostream>
#include <string>
using namespace std;

class RailwayTicket {
public:
    string passengerName;
    string source;
    string destination;
    double fare;

    RailwayTicket(string name, string src, string dest) {
        passengerName = name;
        source = src;
        destination = dest;
        calculateFare();
    }

    void calculateFare() {
        // Logical error: fare is incorrectly calculated (should depend on distance)
        fare = 50; // fixed fare for all routes
    }

    void display() {
        cout << "Passenger: " << passengerName << endl;
        cout << "From: " << source << " To: " << destination << endl;
        cout << "Fare: " << fare << endl;
    }
};

int main() {
    RailwayTicket t1("Ali","CityA","CityB");
    t1.display();
    return 0;
}
