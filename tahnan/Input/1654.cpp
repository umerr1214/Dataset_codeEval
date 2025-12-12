#include <iostream>
#include <string>
using namespace std;

class SmartDoorbell {
public:
    string visitorName;
    string timeStamp;
    bool alertStatus;

    void ring() {
        alertStatus = false; // logic mistake
        cout << visitorName << " rang the doorbell at " << timeStamp << endl;
    }

    void dismissAlert() {
        alertStatus = true; // logic mistake
    }

    void displayLog() {
        cout << "Visitor: " << visitorName << " Status:" << (alertStatus ? "Alert" : "Dismissed") << endl;
    }
};

int main() {
    SmartDoorbell bell;
    bell.visitorName = "John";
    bell.timeStamp = "12:00 PM";
    bell.alertStatus = false;

    bell.ring();
    bell.dismissAlert();
    bell.displayLog();

    return 0;
}
