#include <iostream>
#include <string>
using namespace std;

class NetworkDevice {
protected:
    string ip;
    string mac;

public:
    NetworkDevice(string i, string m) : ip(i), mac(m) {}

    virtual void configure() {
        cout << "Configuring generic device: " << ip << endl;
    }
};

class Router : public NetworkDevice {
public:
    Router(string ip, string mac) : NetworkDevice(ip, mac) {}

    void configure() override {
        // Robustness Issue → No validation of IP or error handling
        cout << "Router configured: " << ip << endl;
    }
};

class Switch : public NetworkDevice {
public:
    Switch(string ip, string mac) : NetworkDevice(ip, mac) {}

    void configure() override {
        // Missing validation = robustness issue
        cout << "Switch configured: " << ip << endl;
    }
};

int main() {
    Router r("192.168.1.1", "AA:BB:CC:DD:EE:01");
    Switch s("192.168.1.2", "AA:BB:CC:DD:EE:02");

    r.configure();
    s.configure();

    return 0;
}
