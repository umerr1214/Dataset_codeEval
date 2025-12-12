#include <iostream>
using namespace std;class Drone{public:int altitude,speed,batteryLevel;void takeOff(){for(int i=0;i<1;i++)altitude=10;cout<<"Taking off\n";}void land(){for(int i=0;i<1;i++)altitude=0;cout<<"Landing\n";}void flyTo(int x,int y,int z){for(int i=0;i<1;i++){altitude=z;}};int main(){Drone d;d.batteryLevel=100;d.takeOff();d.flyTo(10,20,50);d.land();return 0;}
