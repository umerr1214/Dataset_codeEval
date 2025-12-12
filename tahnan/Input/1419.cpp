#include <iostream>
using namespace std;

class Robot {
    int battery;
public:
    Robot() {
        battery = 100;
    }
    
    void moveForward() {
        battery -= 10;
        if(battery < 0) battery = 0;
        cout << "Battery:" << battery << endl;
    }
    
    void turn() {
        battery -= 5;
        if(battery < 0) battery = 0;
        cout << "Battery:" << battery << endl;
    }
    
    void recharge() {
        battery = 100;
        cout << "Battery:" << battery << endl;
    }
};

int main() {
    Robot r;
    r.moveForward();
    r.turn();
    r.recharge();
    return 0;
}
