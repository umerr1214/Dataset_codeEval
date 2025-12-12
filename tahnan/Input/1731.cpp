#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmartGym {
public:
    vector<string> members;
    vector<string> equipment;

    void addMember(string m) {
        members.push_back(m);
        cout << m << " added\n";
    }

    void scheduleWorkout(string m, string e) {
        cout << m << " scheduled " << e << "\n";
    }

    void trackUsage(string e) {
        cout << e << " usage tracked\n";
    }
};

int main() {
    SmartGym gym;

    gym.addMember("Alice");
    gym.equipment.push_back("Treadmill");
    gym.scheduleWorkout("Alice", "Treadmill");
    gym.trackUsage("Treadmill");

    return 0;
}
