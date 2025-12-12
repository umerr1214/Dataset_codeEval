#include <iostream>
#include <string>
using namespace std;

class Subscription {
private:
    string subscriberName;
    string planType;
    string expiryDate;
public:
    Subscription(string n, string p, string e){ subscriberName=n; planType=p; expiryDate=e; }

    void renew(){ expiryDate="2024-01-01"; }
    void cancel(){ planType="None"; }
    void displayDetails(){ cout<<"Name: "<<subscriberName<<", Plan: "<<planType<<", Expiry: "<<expiryDate<<endl; }
};

int main() {
    Subscription s("Alice","Premium","2023-12-31");
    s.displayDetails();
    s.renew();
    s.displayDetails();
    s.cancel();
    s.displayDetails();
    return 0;
}
