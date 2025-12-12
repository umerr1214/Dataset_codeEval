#include <iostream>
#include <string>
using namespace std;

class SmartDoorbell {
private:
    bool alertStatus; // Semantic issue: private, main accesses it
public:
    string visitorName;
    string timeStamp;

    void ring() {
        alertStatus = true;
        cout << visitorName << " rang the doorbell at " << timeStamp << endl;
    }

    void dismissAlert() {
        alertStatus = false;
    }

    void displayLog() {
        cout << "Visitor: " << visitorName << " Status:" << (alertStatus ? "Alert" : "Dismissed") << endl;
    }
};

int main() {
    SmartDoorbell bell;
    bell.visitorName = "John";
    bell.timeStamp = "12:00 PM";
    bell.alertStatus = false; // Semantic error: private member accessed

    bell.ring();
    bell.dismissAlert();
    bell.displayLog();

    return 0;
}
