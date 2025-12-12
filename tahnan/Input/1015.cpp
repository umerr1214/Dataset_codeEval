#include <iostream>
using namespace std;

class Account {
public:
    double balance
    virtual double calculateInterest() { return 0; }
};

class SavingsAccount : public Account {
public:
    double calculateInterest() { return balance * 0.05 }
};

class CurrentAccount : public Account {
public:
    double calculateInterest() { return balance * 0.02 }
};

int main() {
    SavingsAccount s;
    s.balance = 1000;
    CurrentAccount c;
    c.balance = 2000;
    cout << "Savings Interest: " << s.calculateInterest() << endl;
    cout << "Current Interest: " << c.calculateInterest() << endl;
    return 0
}
