#include <iostream>
#include <string>
using namespace std;

class RailwayTicket {
    string passengerName;
    string source;
    string destination;
    double fare;

public:
    RailwayTicket(string p, string s, string d) {
        passengerName = p;
        source = s;
        destination = d;
        fare = 0;
    }

    void calculateFare() {
        int distance = 0;
        if (source == "CityA" && destination == "CityB") distance = 100;
        else if (source == "CityB" && destination == "CityC") distance = 150;
        else distance = 50;
        fare = distance * 0.5; // 0.5 per km
    }

    void displayTicket() {
        cout << "Passenger: " << passengerName << endl;
        cout << "From: " << source << " To: " << destination << endl;
        cout << "Fare: " << fare << endl;
    }

    double getFare() {
        return fare;
    }
};

int main() {
    RailwayTicket t("Ali", "CityA", "CityB");
    t.calculateFare();
    t.displayTicket();
    return 0;
}
