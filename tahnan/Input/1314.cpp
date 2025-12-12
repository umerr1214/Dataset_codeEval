#include <iostream>
#include <vector>
using namespace std;

class Transaction {
public:
    string type;
    float amount;
    Transaction(string t, float a) { type = t; amount = a; }
};

class Customer {
public:
    string name;
    float balance;
    vector<Transaction> history;

    Customer(string n, float b) { name = n; balance = b; }

    void deposit(float amt) {
        balance += amt;
        history.push_back(Transaction("deposit", amt));
    }

    void withdraw(float amt) {
        if(amt <= balance) {
            balance -= amt;
            history.push_back(Transaction("withdraw", amt));
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    void showHistory() {
        for(auto &t : history)
            cout << t.type << " " << t.amount << endl;
    }
};

int main() {
    Customer c("Alice", 100);
    c.deposit(50);
    c.withdraw(30);
    c.showHistory();
    return 0;
}
