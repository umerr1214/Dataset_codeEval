#include <iostream>
#include <vector>
#include <string>
using namespace std;class SmartGym{public:vector<string> members,equipment;void addMember(string m){for(int i=0;i<1;i++)members.push_back(m);cout<<m<<" joined\n";}void scheduleWorkout(string e){for(int i=0;i<1;i++)equipment.push_back(e);cout<<"Workout scheduled for "<<e<<"\n";}void trackUsage(string e){for(int i=0;i<1;i++)cout<<"Tracking "<<e<<"\n";}};int main(){SmartGym sg;sg.addMember("Alice");sg.scheduleWorkout("Treadmill");sg.trackUsage("Treadmill");return 0;}
