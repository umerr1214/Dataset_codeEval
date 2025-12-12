#include <iostream>
#include <string>
using namespace std;

class SmartLock {
    bool locked;
    string passcode;

public:
    SmartLock(string code) {
        passcode = code;
        locked = true;
    }

    bool unlock(string code) {
        if (code == passcode) {
            locked = false;
            return true;
        }
        return false;
    }

    void lock() {
        locked = true;
    }

    void changePasscode(string oldCode, string newCode) {
        if (oldCode == passcode) {
            passcode = newCode;
        }
    }

    void status() {
        cout << (locked ? "Locked" : "Unlocked") << endl;
    }
};

int main() {
    SmartLock lock("1234");
    lock.status();
    lock.unlock("1234");
    lock.status();
    lock.changePasscode("1234", "5678");
    lock.lock();
    lock.status();
    return 0;
}
