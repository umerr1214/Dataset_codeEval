#include <iostream>
using namespace std;

class Light {
public:
    void on() {
        cout << "Light on" << endl;
    }
    void off() {
        cout << "Light off" << endl;
    }
};

class Fan {
public:
    void on() {
        cout << "Fan on" << endl;
    }
    void off() {
        cout << "Fan off" << endl;
    }
};

class DoorLock {
public:
    void lock() {
        cout << "Door locked" << endl;
    }
    void unlock() {
        cout << "Door unlocked" << endl;
    }
};

class SmartHome {
    Light l;
    Fan f;
    DoorLock d;
public:
    void turnOnLight() {
        l.on();
    }
    void turnOffLight() {
        l.off();
    }
    void turnOnFan() {
        f.on();
    }
    void turnOffFan() {
        f.off();
    }
    void lockDoor() {
        d.lock();
    }
    void unlockDoor() {
        d.unlock();
    }
};

int main() {
    SmartHome sh;
    sh.turnOnLight();
    sh.turnOnFan();
    sh.lockDoor();
    return 0;
}
