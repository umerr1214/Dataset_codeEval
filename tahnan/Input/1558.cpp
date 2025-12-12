#include <iostream>
#include <string>
using namespace std;

class Subscription {
public: // Semantic error: public members instead of private
    string subscriberName;
    string planType;
    string expiryDate;

    void renew(){ expiryDate="2024-01-01"; }
    void cancel(){ planType="None"; }
    void displayDetails(){
        cout<<"Name: "<<subscriberName<<", Plan: "<<planType<<", Expiry: "<<expiryDate<<endl;
    }
};

int main() {
    Subscription s;
    s.subscriberName="Alice";
    s.planType="Premium";
    s.expiryDate="2023-12-31";
    s.displayDetails();
    s.renew();
    s.displayDetails();
    s.cancel();
    s.displayDetails();
    return 0;
}
