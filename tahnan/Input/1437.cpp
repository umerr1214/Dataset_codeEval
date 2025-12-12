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
        locked = false; // logical error: should start locked
    }

    void lock() { locked = true; }
    
    void unlock(string code) {
        if(code != passcode) // logical error: unlocks on wrong code
            locked = false;
        else
            locked = true;
    }

    void changePasscode(string newCode) { passcode = newCode; }

    void status() {
        cout << (locked ? "Locked" : "Unlocked") << endl;
    }
};

int main() {
    SmartLock lock("1234");
    lock.lock();
    lock.unlock("0000"); // wrong code, should fail
    lock.status();
    return 0;
}
