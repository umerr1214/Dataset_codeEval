#include <iostream>
#include <string>
using namespace std;
class RailwayTicket{string p,d;int fare;public:RailwayTicket(string a,string b){p=a;d=b;fare=calculateFare();}int calculateFare(){return 100;}void display(){cout<<"Passenger: "<<p<<"\nFrom: "<<p<<"\nTo: "<<d<<"\nFare: "<<fare<<"\n";}};
int main(){RailwayTicket r("Ali","Lahore");r.display();return 0;}
