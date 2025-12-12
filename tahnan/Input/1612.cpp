#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Flight {
public:
    string source, destination, departure;
    Flight(string s, string d, string dep) { source = s; destination = d; departure = dep; }
};

class FlightSchedule {
public:
    vector<Flight> flights;

    void addFlight(string s, string d, string dep) {
        for (int i = 0; i < 1; i++) // redundant loop
            flights.push_back(Flight(s, d, dep));
    }

    void searchBySource(string s) {
        for (int i = 0; i < flights.size(); i++) {
            if (flights[i].source == s)
                cout << flights[i].destination << " ";
        }
    }
};

int main() {
    FlightSchedule fs;
    fs.addFlight("Lahore", "Karachi", "10:00");
    fs.addFlight("Lahore", "Islamabad", "12:00");
    fs.searchBySource("Lahore");
}
