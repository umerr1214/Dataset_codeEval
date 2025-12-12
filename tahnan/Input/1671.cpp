#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmartGym {
private: // Semantic error: members should be public for proper schedule
    vector<string> members;
    vector<string> equipment;

public:
    void addMember(string m) {
        members.push_back(m);
    }

    void scheduleWorkout(string m, string e) {
        cout << "Scheduled " << m << " on " << e << endl;
    }

    void trackUsage(string e) {
        cout << e << " is being used." << endl;
    }
};

int main() {
    SmartGym gym;
    gym.members.push_back("Alice"); // Semantic error: private member accessed
    gym.equipment.push_back("Treadmill");

    gym.scheduleWorkout("Alice","Treadmill");
    gym.trackUsage("Treadmill");

    return 0;
}
