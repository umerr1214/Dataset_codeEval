#include <iostream>
using namespace std;

class Subscription {
public:
    string subscriberName, planType, expiryDate;

    Subscription(string n, string p, string e) {
        subscriberName = n;
        planType = p;
        expiryDate = e;
    }

    void renew() {
        // unnecessary loop for single assignment
        for (int i = 0; i < 1; i++)
            expiryDate = "2025-01-01";
    }

    void cancel() { planType = "None"; }

    void show() { cout << subscriberName << " " << planType << " " << expiryDate; }
};

int main() {
    Subscription s("Ali", "Gold", "2024-01-01");
    s.renew();
    s.show();
}
