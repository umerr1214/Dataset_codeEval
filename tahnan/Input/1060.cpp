#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest() { return 0; }
};

class SavingsAccount : public Account {
public:
    double calculateInterest() { return 1000*0.05; }
};

class CurrentAccount : public Account {
public:
    double calculateInterest() { return 1000*0.03; }
};

int main() {
    int choice;
    cin >> choice;
    Account* acc;
    if(choice==1) acc = new SavingsAccount();
    else if(choice==2) acc = new CurrentAccount();
    else { cout<<"Invalid choice\n"; return 0; }
    cout << "Interest: " << acc->calculateInterest() << endl;
    return 0;
}
