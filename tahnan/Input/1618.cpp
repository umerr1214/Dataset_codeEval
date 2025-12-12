#include <iostream>
using namespace std;

class Subscription {
private:
    string subscriberName;
    string planType;
    string expiryDate;

public:
    Subscription(const string &name, const string &plan, const string &expiry)
        : subscriberName(name), planType(plan), expiryDate(expiry) {}

    void renew(const string &newExpiry) { expiryDate = newExpiry; }
    void cancel() { planType = "None"; }
    void show() const { cout << subscriberName << " " << planType << " " << expiryDate; }
};

int main() {
    Subscription s("Ali", "Gold", "2024-01-01");
    s.renew("2025-01-01");
    s.show();
}
