#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance
public:
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) {
        if(balance >= amt)
            balance -= amt
        else
            cout << "Insufficient funds\n";
    }
    double getBalance() { return balance }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(500);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
