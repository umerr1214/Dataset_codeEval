#include <iostream>
#include <string>
using namespace std;

class SmartDoorbell {
public:
    string visitorName;
    string timeStamp;
    string alertStatus;

    void ring(string name, string time) {
        visitorName = name;
        timeStamp = time;
        alertStatus = "Ringing";
        cout << name << " rang at " << time << "\n";
    }

    void dismissAlert() {
        alertStatus = "Dismissed";
        cout << "Alert dismissed\n";
    }

    void displayLog() {
        cout << "Visitor: " << visitorName 
             << " Time: " << timeStamp 
             << " Status: " << alertStatus << "\n";
    }
};

int main() {
    SmartDoorbell sd;

    sd.ring("Bob", "10:00AM");
    sd.dismissAlert();
    sd.displayLog();

    return 0;
}
