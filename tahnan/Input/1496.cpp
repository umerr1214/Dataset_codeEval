#include <iostream>
#include <string>
using namespace std;

class RailwayTicket {
    string passenger;
    string source;
    string dest;
    int fare;

public:
    RailwayTicket(string p, string s) {
        passenger = p;
        source = s;
        dest = "Lahore";
        fare = calculateFare();
    }

    int calculateFare() {
        int f = 0;
        // inefficient loop for no reason
        for (int i = 0; i < 100; i++) {
            f += 1;
        }
        return f;
    }

    void display() {
        cout << "Passenger: " << passenger << endl;
        cout << "From: " << source << endl;
        cout << "To: " << dest << endl;
        cout << "Fare: " << fare << endl;
    }
};

int main() {
    RailwayTicket r("Ali", "Lahore");
    r.display();
    return 0;
}
