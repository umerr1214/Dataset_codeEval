#include <iostream>
#include <string>
using namespace std;class SmartDoorbell{public:string visitorName,timeStamp,alertStatus;void ring(string name,string time){for(int i=0;i<1;i++){visitorName=name;timeStamp=time;alertStatus="Ringing";}cout<<name<<" rang at "<<time<<"\n";}void dismissAlert(){for(int i=0;i<1;i++)alertStatus="Dismissed";cout<<"Alert dismissed\n";}void displayLog(){for(int i=0;i<1;i++)cout<<"Visitor: "<<visitorName<<" Time: "<<timeStamp<<" Status: "<<alertStatus<<"\n";}};int main(){SmartDoorbell sd;sd.ring("Bob","10:00AM");sd.dismissAlert();sd.displayLog();return 0;}
