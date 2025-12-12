#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmartDoorbell {
public:
    string visitorName;
    string timeStamp;
    string alertStatus;
    vector<string> log;

    void ring(string visitor, string time) {
        visitorName = visitor;
        timeStamp = time;
        alertStatus = "Active";
        log.push_back(visitor + " at " + time);
        cout << visitor << " rang the doorbell." << endl;
    }

    void dismissAlert() {
        if(alertStatus == "Inactive") cout << "Alert already dismissed!" << endl;
        else {
            alertStatus = "Inactive";
            cout << "Alert dismissed." << endl;
        }
    }

    void displayLog() {
        for(auto &entry: log) cout << entry << endl;
    }
};

int main() {
    SmartDoorbell sd;
    sd.ring("John", "10:00AM");
    sd.dismissAlert();
    sd.dismissAlert();  // Edge case: already inactive
    sd.displayLog();

    return 0;
}
