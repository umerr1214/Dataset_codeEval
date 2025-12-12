#include <iostream>
using namespace std;class Drone{public:int altitude,speed,batteryLevel;void takeOff(){cout<<"Drone taking off\n";}void land(){cout<<"Drone landing\n";}void flyTo(int x,int y,int z){cout<<"Flying to "<<x<<","<<y<<","<<z<<"\n";}};int main(){Drone d;d.altitude=0;d.speed=10;d.batteryLevel=100;d.takeOff();d.flyTo(10,20,30);d.land();return 0;}
