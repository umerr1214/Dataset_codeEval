#include <iostream>
#include <vector>
using namespace std;
class Transaction{
public:
    string type;
    float amount;
    Transaction(string t,float a){type=t;amount=a;}
};
class Customer{
public:
    string name;
    float balance;
    vector<Transaction> trans;
    Customer(string n){name=n;balance=0;}
    void deposit(float a){balance+=a;trans.push_back(Transaction("Deposit",a));}
    void withdraw(float a){
        if(a>balance){cout<<"Insufficient funds"<<endl;return;}
        balance-=a;
        trans.push_back(Transaction("Withdraw",a));
    }
    void display(){for(int i=0;i<trans.size();i++) cout<<trans[i].type<<": "<<trans[i].amount<<endl;}
};
int main(){
    Customer c("Alice");
    c.deposit(100);
    c.withdraw(50);
    c.display();
    return 0;
}
