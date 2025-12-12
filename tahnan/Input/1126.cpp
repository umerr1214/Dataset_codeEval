#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    string name;
    double balance;
    Account(string n, double b) { name = n; balance = b; }
};

class Bank {
private:
    vector<Account> accounts;
public:
    void openAccount(string n, double b) {
        accounts.push_back(Account(n, b));
    }

    Account search(string n) {
        // Logical error: returns first account always
        return accounts[0];
    }
};

int main() {
    Bank b;
    b.openAccount("Alice", 1000);
    b.openAccount("Bob", 2000);

    Account a = b.search("Bob");
    cout << a.name << " " << a.balance << endl;
    return 0;
}
