#include <iostream>
using namespace std;

class Flight {
private:
    int duration;
public:
    Flight(int d) { duration = d; }
    friend bool shorter(Flight a, Flight b) {
        // Logical error: returns wrong comparison
        return a.duration > b.duration;
    }
};

int main() {
    Flight f1(120), f2(90);
    if(shorter(f1, f2))
        cout << "f1 is shorter\n";
    else
        cout << "f2 is shorter\n";
    return 0;
}
