#include <iostream>
using namespace std;
class RS{public:virtual void r(){cout<<"Generic reservation\n";}};class HR:public RS{public:void r(){cout<<"Hotel reserved\n";}};class BR:public RS{public:void r(){cout<<"Bus reserved\n";}};class CR:public RS{public:void r(){cout<<"Seat reserved\n";}};int main(){HR h;BR b;CR c;h.r();b.r();c.r();return 0;}
