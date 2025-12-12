#include <iostream>
using namespace std;

class NetworkDevice {
public:
    string IP, MAC;
    NetworkDevice(string ip, string mac) : IP(ip), MAC(mac) {}
    virtual void configure() { cout << "Device configured "; }
};

class Router : public NetworkDevice {
public:
    Router(string ip, string mac) : NetworkDevice(ip, mac) {}
    void configure() override { cout << "Router configured "; }
};

class Switch : public NetworkDevice {
public:
    Switch(string ip, string mac) : NetworkDevice(ip, mac) {}
    void configure() override { cout << "Switch configured "; }
};

int main() {
    Router r("192.168.0.1", "AA:BB:CC");
    Switch s("192.168.0.2", "DD:EE:FF");
    r.configure();
    s.configure();
}
