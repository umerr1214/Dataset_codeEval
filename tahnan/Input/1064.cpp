#include<iostream>
using namespace std;class BankAccount{double balance;public:BankAccount(double b=0){balance=b;}void deposit(double x){balance+=x;}void withdraw(double x){if(x>balance)cout<<"Insufficient\n";else balance-=x;}double getBalance(){return balance;}};int main(){BankAccount b;double x;cin>>x;b.deposit(x);cin>>x;b.withdraw(x);cout<<b.getBalance()<<endl;return 0;}
