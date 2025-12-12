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
        calculateFare()  // <- Missing semicolon (syntax error)
    }

    void calculateFare() {
        if (source == "CityA" && destination == "CityB")
            fare = 50;
        else if (source == "CityA" && destination == "CityC")
            fare = 80;
        else
            fare = 100;
    }

    void displayTicket() {
        cout << "Passenger: " << passengerName << endl;
        cout << "From: " << source << " To: " << destination << endl;
        cout << "Fare: " << fare << endl;
    }
}  // <- Missing semicolon (syntax error)

int main() {
    RailwayTicket ticket1("Ali", "CityA", "CityB");
    ticket1.displayTicket();
    return 0;
}
