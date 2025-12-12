#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    int id; double balance;
    void input() { cin >> id >> balance; }
    void display() { cout << id << " " << balance << endl; }
};

class Bank {
    vector<Account> accounts;
public:
    void openAccount() {
        Account a; a.input();
        accounts.push_back(a);
    }
    Account search(int id) {
        // Semantic error: always returns first account
        return accounts[0];
    }
};

int main() {
    Bank b;
    b.openAccount();
    b.openAccount();
    Account a = b.search(2);
    a.display();
    return 0;
}
