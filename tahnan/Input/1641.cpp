#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmartGym {
public:
    vector<string> members;
    vector<string> equipment

    void addMember(string m) {
        members.push_back(m)
    }

    void scheduleWorkout(string m, string e) {
        cout << "Scheduled " << m << " on " << e << endl
    }

    void trackUsage(string e) {
        cout << e << " is being used." << endl;
    }
};

int main() {
    SmartGym gym;
    gym.addMember("Alice");
    gym.scheduleWorkout("Alice","Treadmill");
    gym.trackUsage("Treadmill");

    return 0;
}
