#include <iostream>
using namespace std;
class SmartThermostat{public:int c,t;string m;SmartThermostat(int x,int y,string z){c=x;t=y;m=z;}void adjust(){if(m=="HEAT"){if(c<t)c++;}else{if(c>t)c--;}}};
int main(){SmartThermostat s(20,25,"HEAT");s.adjust();s.adjust();s.adjust();cout<<s.c;}
