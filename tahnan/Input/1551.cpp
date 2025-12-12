#include <iostream>
#include <string>
using namespace std;

class NetworkDevice {
protected:
    string IP;
    string MAC;
public:
    NetworkDevice(string ip,string mac){ IP=ip; MAC=mac; }
    virtual void configure(){ cout<<"Configuring NetworkDevice"<<endl; }
};

class Router: public NetworkDevice {
public:
    Router(string ip,string mac): NetworkDevice(ip,mac){}
    void configure(){ cout<<"Configuring Switch"<<endl; } // Logical error: prints wrong class
};

class Switch: public NetworkDevice {
public:
    Switch(string ip,string mac): NetworkDevice(ip,mac){}
    void configure(){ cout<<"Configuring Router"<<endl; } // Logical error: prints wrong class
};

int main() {
    Router r("192.168.1.1","AA:BB:CC:DD:EE:FF");
    Switch s("192.168.1.2","11:22:33:44:55:66");
    r.configure();
    s.configure();
    return 0;
}
