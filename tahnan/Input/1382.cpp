#include <iostream>
using namespace std;
class L{public:void on(){cout<<"L on\n";} void off(){cout<<"L off\n";}};class F{public:void on(){cout<<"F on\n";} void off(){cout<<"F off\n";}};class D{public:void lock(){cout<<"D lock\n";} void unlock(){cout<<"D unlock\n";}};class SH{L l;F f;D d;public:void turnOnL(){l.on();} void turnOffL(){l.off();} void turnOnF(){f.on();} void turnOffF(){f.off();} void lockD(){d.lock();} void unlockD(){d.unlock();}};int main(){SH sh;sh.turnOnL();sh.turnOnF();sh.lockD();return 0;}
