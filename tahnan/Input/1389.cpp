#include <iostream>
using namespace std;
class R{int b;public:R(){b=100;} void mv(){b-=10;cout<<"Move "<<b<<endl;} void rc(){b=100;cout<<"Recharge "<<b<<endl;}};int main(){R r;r.mv();r.rc();return 0;}
