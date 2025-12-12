#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Flight {
public:
    string source;
    string destination;
    string departure;
    Flight(string s,string d,string dep){ source=s; destination=d; departure=dep; }
};

class FlightSchedule {
private:
    vector<Flight> flights;
public:
    void addFlight(Flight f){ flights.push_back(f); }

    void searchBySource(string src) {
        // Logical error: prints all flights regardless of source
        for(int i=0;i<flights.size();i++)
            cout<<flights[i].destination<<endl;
    }
};

int main() {
    FlightSchedule fs;
    fs.addFlight(Flight("Lahore","Dubai","10:00"));
    fs.addFlight(Flight("Karachi","Dubai","12:00"));
    fs.searchBySource("Lahore");
    return 0;
}
