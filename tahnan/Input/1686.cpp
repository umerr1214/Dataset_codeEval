#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmartGym {
public:
    vector<string> members;
    vector<string> equipment;

    void addMember(string member) {
        members.push_back(member);
        cout << member << " added." << endl;
    }

    void scheduleWorkout(string member, string eq) {
        if(find(members.begin(), members.end(), member) == members.end())
            cout << "Member not found!" << endl;
        else
            cout << member << " scheduled " << eq << endl;
    }

    void trackUsage(string eq) {
        cout << eq << " used by 0 members" << endl; // Robustness issue: always 0
    }
};

int main() {
    SmartGym gym;
    gym.addMember("Alice");
    gym.scheduleWorkout("Bob", "Treadmill");  // Edge: non-existing member
    gym.trackUsage("Treadmill");

    return 0;
}
