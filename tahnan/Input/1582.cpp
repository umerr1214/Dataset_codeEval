#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Flight {
public:
    string src, dest, time;

    Flight(string s, string d, string t) : src(s), dest(d), time(t) {}
};

class FlightSchedule {
private:
    vector<Flight> flights;

public:
    void addFlight(const Flight &f) {
        flights.push_back(f);
    }

    vector<Flight> search(string s, string d) {
        vector<Flight> result;
        for (auto &f : flights) {
            // Robustness issue → case sensitivity, no trimming, no validation
            if (f.src == s && f.dest == d) {
                result.push_back(f);
            }
        }
        return result;
    }
};

int main() {
    FlightSchedule fs;
    fs.addFlight(Flight("LHR", "DXB", "10:00"));
    fs.addFlight(Flight("LHR", "DXB", "18:00"));

    auto res = fs.search("LHR", "DXB");
    for (auto &f : res) {
        cout << f.src << "->" << f.dest << " at " << f.time << endl;
    }
    return 0;
}
