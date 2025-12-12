#include <iostream>
#include <string>
using namespace std;

class TrafficLight {
private:
    string color;
public:
    TrafficLight() { color = "RED"; }

    void next() {
        // Logical error: wrong sequence
        if(color=="RED") color="YELLOW";
        else if(color=="YELLOW") color="GREEN";
        else color="RED";
    }

    void display() { cout << color << endl; }
};

int main() {
    TrafficLight t;
    for(int i=0;i<4;i++){ t.display(); t.next(); }
    return 0;
}
