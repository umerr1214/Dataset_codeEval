#include <iostream>
using namespace std;

class Flight {
private:
    int duration

public:
    Flight(int d) { duration = d; }
    friend Flight longerFlight(Flight f1, Flight f2);
};

Flight longerFlight(Flight f1, Flight f2) {
    return (f1.duration > f2.duration ? f1 : f2)
}

int main() {
    Flight f1(120)
    Flight f2(150)
    Flight f3 = longerFlight(f1, f2)
    cout << f3.duration << endl
    return 0;
}
