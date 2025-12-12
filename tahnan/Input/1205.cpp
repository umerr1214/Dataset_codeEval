#include <iostream>
using namespace std;

class Flight {
private:
    int duration;

public:
    void input() {
        cin >> duration;
    }

    friend Flight longerFlight(const Flight &f1, const Flight &f2);
    void display() {
        cout << duration << endl;
    }
};

Flight longerFlight(const Flight &f1, const Flight &f2) {
    return (f1.duration > f2.duration) ? f1 : f2;
}

int main() {
    Flight f1, f2, f3;
    f1.input();
    f2.input();
    f3 = longerFlight(f1, f2);
    f3.display();
    return 0;
}
