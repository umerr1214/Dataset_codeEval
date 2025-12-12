#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest() { return 0; }
};

class SavingsAccount : public Account {
public:
    double calculateInterest() { return 1000 * 0.05; }
};

class CurrentAccount : public Account {
public:
    double calculateInterest() { return 1000 * 0.03; }
};

int main() {
    Account* s = new SavingsAccount();
    Account* c = new CurrentAccount();
    cout << "Savings Interest: " << s->calculateInterest() << endl;
    cout << "Current Interest: " << c->calculateInterest() << endl;
    return 0;
}
