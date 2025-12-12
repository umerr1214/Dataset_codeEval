#include <iostream>
#include <string>
using namespace std;

class RailwayTicket {
private:
    string passengerName;
    string source;
    string destination;
    double fare;
public:
    RailwayTicket(string name, string src, string dest) {
        passengerName = name;
        source = src;
        destination = dest;
        calculateFare();
    }

    void calculateFare() {
        // Semantic error: incorrectly tries to access non-existent 'distance' variable
        fare = distance * 10; // distance is undefined
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
