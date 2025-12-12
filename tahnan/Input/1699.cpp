#include <iostream>
#include <string>
using namespace std;class SmartDoorbell{public:string visitorName,timeStamp,alertStatus;void ring(string v,string t){visitorName=v;timeStamp=t;alertStatus="Active";cout<<"Ring from "<<v<<"\n";}void dismissAlert(){alertStatus="Dismissed";cout<<"Alert Dismissed\n";}void displayLog(){cout<<visitorName<<" at "<<timeStamp<<" Status:"<<alertStatus<<"\n";}};int main(){SmartDoorbell sd;sd.ring("John","10AM");sd.dismissAlert();sd.displayLog();return 0;}
