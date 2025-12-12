#include <iostream>
using namespace std;class AutonomousCar{public:int speed,fuelLevel;string route;void navigate(string r){route=r;cout<<"Navigating "<<r<<"\n";}void refuel(int f){fuelLevel+=f;cout<<"Refueled "<<f<<"\n";}void stop(){speed=0;cout<<"Stopped\n";}};int main(){AutonomousCar c;c.speed=60;c.fuelLevel=20;c.navigate("CityA");c.refuel(30);c.stop();return 0;}
