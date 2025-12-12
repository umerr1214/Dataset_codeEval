#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;
    BankAccount() { balance = 0; }
    void deposit(double amt) { balance -= amt; } // logical error: subtracts instead of adds
    void withdraw(double amt) { balance += amt; } // logical error: adds instead of subtracts
    void display() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount a;
    a.deposit(1000);
    a.withdraw(500);
    a.display();
    return 0;
}
