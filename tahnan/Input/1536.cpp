#include <iostream>
#include <string>
using namespace std;

class NetworkDevice {
public:
    string IP, MAC;
    NetworkDevice(string ip,string mac){IP=ip MAC=mac;}
    virtual void configure(){cout<<"Configuring Network Device"<<endl;}
};

class Router:public NetworkDevice {
public:
    Router(string ip,string mac):NetworkDevice(ip,mac){}
    void configure(){cout<<"Configuring Router"<<endl}
};

class Switch:public NetworkDevice {
public:
    Switch(string ip,string mac):NetworkDevice(ip,mac){}
    void configure(){cout<<"Configuring Switch"<<endl}
};

int main() {
    Router r("192.168.1.1","AA:BB:CC:DD:EE:FF");
    Switch s("192.168.1.2","FF:EE:DD:CC:BB:AA");
    r.configure();
    s.configure();
    return 0;
}
