#include <iostream>
using namespace std;

class BankAccount {
    double balance;
public:
    BankAccount(double b=0) { balance = b; }
    void deposit(double amt) { if(amt>0) balance += amt; else cout<<"Invalid deposit\n"; }
    void withdraw(double amt) { if(amt>balance) cout<<"Insufficient funds\n"; else balance-=amt; }
    double getBalance() { return balance; }
};

int main() {
    BankAccount acc(500);
    double d, w;
    cin >> d >> w;
    acc.deposit(d);
    acc.withdraw(w);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
