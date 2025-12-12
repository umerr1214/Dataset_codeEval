#include <iostream>
#include <vector>
#include <string>
using namespace std;class SmartGym{public:vector<string> members,equipment;void addMember(string m){members.push_back(m);cout<<m<<" added\n";}void scheduleWorkout(string m,string e){cout<<m<<" uses "<<e<<"\n";}void trackUsage(string e){cout<<"Equipment "<<e<<" used\n";}};int main(){SmartGym g;g.addMember("Alice");g.equipment={"Treadmill"};g.scheduleWorkout("Alice","Treadmill");g.trackUsage("Treadmill");return 0;}
