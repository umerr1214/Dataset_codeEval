#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b = 0) { 
        balance = b; 
    }

    void deposit(double x) { 
        balance += x; 
    }

    void withdraw(double x) { 
        if (x > balance) cout << "Insufficient balance\n"; 
        else balance -= x; 
    }
    
    double getBalance() { 
        return balance; 
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    double d, w;
    cin >> d >> w;
    BankAccount b;
    b.deposit(d);
    b.withdraw(w);
    b.display();
    return 0;
}
