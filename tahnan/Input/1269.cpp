#include <iostream>
#include <vector>
using namespace std;

class Transaction {
public:
    string type;
    float amount;
    Transaction(string t, float a) 
    {
        type = t;
        amount = a;
    }
};

class Customer {
public:
    string name;
    float balance;
    vector<Transaction> transactions;

    Customer(string n) 
    {
        name = n;
        balance = 0;
    }

    void deposit(float a) 
    {
        balance += a;
        transactions.push_back(Transaction("Deposit", a));
    }

    void withdraw(float a) 
    {
        if(a > balance) 
        {
            cout << "Insufficient funds\n";
            return; // robustness: no overdraft
        }
        balance -= a;
        transactions.push_back(Transaction("Withdraw", a));
    }

    void displayTransactions() 
    {
        for(int i = 0; i < transactions.size(); i++)
        {
            cout << transactions[i].type << ": " << transactions[i].amount << endl;
        }
    }
};

int main() 
{
    Customer c("Alice");
    c.deposit(100);
    c.withdraw(50);
    c.withdraw(100); // robustness: exceeds balance
    c.displayTransactions();
    return 0;
}
