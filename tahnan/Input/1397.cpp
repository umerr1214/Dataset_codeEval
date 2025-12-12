#include <iostream>
using namespace std;
class Light{public:void on(){cout<<"L on\n";} void off(){cout<<"L off\n";}};
class Fan{public:void on(){cout<<"F on\n";} void off(){cout<<"F off\n";}};
class Door{public:void lock(){cout<<"D lock\n";} void unlock(){cout<<"D unlock\n";}};
class SmartHome{
    Light l; Fan f; Door d;
public:
    void turnOnL(){for(int i=0;i<1;i++) l.on();} // redundant loop
    void turnOffL(){l.off();}
    void turnOnF(){f.on();}
    void turnOffF(){f.off();}
    void lockD(){d.lock();}
    void unlockD(){d.unlock();}
};
int main(){
    SmartHome sh;
    sh.turnOnL();
    sh.turnOnF();
    sh.lockD();
    return 0;
}
