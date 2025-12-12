#include <iostream>
#include <vector>
using namespace std;

class Account {
private:
    int accNumber;
    double balance;

public:
    void input() {
        cin >> accNumber >> balance;
    }

    int getAccNumber() {
        return accNumber;
    }

    double getBalance() {
        return balance;
    }
};

class Bank {
private:
    vector<Account> accounts;

public:
    void openAccount() {
        Account a;
        a.input();
        accounts.push_back(a);
    }

    Account* searchAccount(int accNum) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getAccNumber() == accNum) {
                return &accounts[i];
            }
        }
        return nullptr;
    }

    void displayAccounts() {
        for (Account &a : accounts) {
            cout << a.getAccNumber() << " " << a.getBalance() << endl;
        }
    }
};

int main() {
    Bank b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        b.openAccount();
    }
    b.displayAccounts();
    return 0;
}
