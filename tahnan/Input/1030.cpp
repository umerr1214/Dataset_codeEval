#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest() { return 0; }
};

class SavingsAccount : public Account {
public:
    double calculateInterest() { return 100; } // correct
};

class CurrentAccount : public Account {
public:
    double calculateInterest() { return 50; } // correct
};

int main() {
    Account* a1 = new SavingsAccount();
    Account* a2 = new CurrentAccount();
    cout << "Savings Interest: " << a1->calculateInterest() << endl;
    cout << "Current Interest: " << a2->calculateInterest() << endl;
    return 0;
}
