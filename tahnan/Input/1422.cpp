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
        locked = true
    }

    void lock() {
        locked = true;
    }

    void unlock(string code) {
        if(code == passcode)
            locked = false
        else
            cout << "Incorrect passcode" << endl;
    }

    void changePasscode(string oldCode, string newCode) {
        if(oldCode == passcode)
            passcode = newCode
        else
            cout << "Cannot change passcode" << endl;
    }

    void status() {
        cout << (locked ? "Locked" : "Unlocked") << endl;
    }
}  // <- Missing semicolon

int main() {
    SmartLock lock1("1234");
    lock1.unlock("1234");
    lock1.status();
    return 0;
}
