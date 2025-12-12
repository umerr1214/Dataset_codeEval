#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    string name;
    double balance
};

class Bank {
private:
    vector<Account> accounts

public:
    void openAccount() {
        Account a;
        cin >> a.name >> a.balance;
        accounts.push_back(a)
    }

    void displayAccounts() {
        for(auto &a: accounts)
            cout << a.name << " " << a.balance << endl
    }
};

int main() {
    Bank b;
    b.openAccount()
    b.displayAccounts()
    return 0;
}
