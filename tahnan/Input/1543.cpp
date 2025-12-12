#include <iostream>
#include <string>
using namespace std;

class Subscription {
private:
    string subscriberName;
    string planType;
    string expiryDate;
public:
    Subscription(string name, string plan, string expiry) {
        subscriberName = name;
        planType = plan;
        expiryDate = expiry;
    }

    void renew() {
        // Logical error: sets expiry to wrong date
        expiryDate = "2024-01-01";
    }

    void cancel() {
        // Logical error: does not actually change plan
        planType = planType;
    }

    void displayDetails() {
        cout << "Name: " << subscriberName << ", Plan: " << planType << ", Expiry: " << expiryDate << endl;
    }
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
