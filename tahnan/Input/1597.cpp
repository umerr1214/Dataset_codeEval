#include <iostream>
#include <vector>
#include <string>
using namespace std;class Flight{public:string src,dest,time;Flight(string s,string d,string t){src=s;dest=d;time=t;}};class FlightSchedule{public:vector<Flight> f;void add(string s,string d,string t){f.push_back(Flight(s,d,t));}void show(){for(auto &x:f)cout<<x.src<<"->"<<x.dest<<" "<<x.time<<" ";}};int main(){FlightSchedule fs;fs.add("NY","LA","10:00");fs.add("LA","SF","12:00");fs.show();}
