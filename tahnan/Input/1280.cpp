#include <iostream>
using namespace std;
class SmartDevice{public:virtual void info(){cout<<"Generic Device"<<endl;}};class SmartPhone:public SmartDevice{public:void info(){cout<<"SmartPhone"<<endl;}};class SmartWatch:public SmartDevice{public:void info(){cout<<"SmartWatch"<<endl;}};int main(){SmartDevice* d[2];d[0]=new SmartPhone();d[1]=new SmartWatch();for(int i=0;i<2;i++)d[i]->info();return 0;}
