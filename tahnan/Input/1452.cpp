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
        // Semantic error: accesses private member of another object
        SmartLock other("0000");
        if(code == other.passcode)
            locked = false;
    }

    void changePasscode(string newCode) { passcode = newCode; }

    void status() { cout << (locked ? "Locked" : "Unlocked") << endl; }
};

int main() {
    SmartLock lock("1234");
    lock.lock();
    lock.unlock("1234");
    lock.status();
    return 0;
}
