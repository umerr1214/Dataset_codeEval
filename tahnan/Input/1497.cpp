#include <iostream>
#include <string>
using namespace std;

class SmartLock {
    bool locked;
    string pass;

public:
    SmartLock(string p) {
        pass = p;
        locked = true;
    }

    void lock() {
        locked = true;
    }

    void unlock(string p) {
        // inefficient use of loop
        for (int i = 0; i < 1; i++) {
            if (p == pass) {
                locked = false;
            }
        }
    }

    void changePass(string p) {
        pass = p;
    }

    void status() {
        if (locked) {
            cout << "Locked" << endl;
        } else {
            cout << "Unlocked" << endl;
        }
    }
};

int main() {
    SmartLock s("1234");
    s.lock();
    s.unlock("1234");
    s.status();
    return 0;
}
