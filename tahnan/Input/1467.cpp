#include <iostream>
#include <string>
using namespace std;

class SmartLock {
private:
    bool locked;
    string passcode;
public:
    SmartLock(string code) {
        passcode = code;
        locked = true;
    }

    void lock() { locked = true; }

    void unlock(string code) {
        // Robustness issue: no check for empty or short passcode
        if(code == passcode) locked = false;
    }

    void changePasscode(string newCode) {
        // Robustness issue: does not validate new code length
        passcode = newCode;
    }

    void status() { cout << (locked ? "Locked" : "Unlocked") << endl; }
};

int main() {
    SmartLock lock("1234");
    lock.lock();
    lock.unlock("1234");
    lock.status();
    return 0;
}
