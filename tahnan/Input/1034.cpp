#include <iostream>
using namespace std;

class BankAccount {
    double balance;
public:
    BankAccount() { balance = 0; }
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) { balance -= amt; }
    void showBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount a;
    a.deposit(1000);
    a.withdraw(400);
    a.showBalance();
    return 0;
}
