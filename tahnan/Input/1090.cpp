#include<iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest(double bal){ return 0; }
};
class SavingsAccount : public Account {
public:
    double calculateInterest(double bal){ return bal * 0.05; }
};
class CurrentAccount : public Account {
public:
    double calculateInterest(double bal){ return bal * 0.02; }
};

int main(){
    double bal;
    cin >> bal;
    SavingsAccount s;
    CurrentAccount c;
    cout << "Savings Interest: " << s.calculateInterest(bal) << endl;
    cout << "Current Interest: " << c.calculateInterest(bal) << endl;
    return 0;
}
