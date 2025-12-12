#include <iostream>
using namespace std;class TrafficLight{public:string c;TrafficLight(){c="RED";}void next(){if(c=="RED")c="GREEN";else if(c=="GREEN")c="YELLOW";else c="RED";}void show(){cout<<c;}};int main(){TrafficLight t;t.show();t.next();t.show();}
