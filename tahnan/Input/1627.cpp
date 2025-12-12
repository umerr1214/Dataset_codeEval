#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Flight {
public:
    string source, destination, departure;
    Flight(string s, string d, string dep) : source(s), destination(d), departure(dep) {}
};

class FlightSchedule {
private:
    vector<Flight> flights;

public:
    void addFlight(string s, string d, string dep) { flights.push_back(Flight(s, d, dep)); }

    void searchBySource(string s) const {
        for (const auto &f : flights) {
            if (f.source == s) cout << f.destination << " ";
        }
    }
};

int main() {
    FlightSchedule fs;
    fs.addFlight("Lahore", "Karachi", "10:00");
    fs.addFlight("Lahore", "Islamabad", "12:00");
    fs.searchBySource("Lahore");
}
