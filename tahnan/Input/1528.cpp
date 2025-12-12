#include <iostream>
#include <string>
using namespace std;

class Subscription {
private:
    string subscriberName;
    string planType;
    string expiryDate;
public:
    Subscription(string n, string p, string e) { subscriberName = n planType = p; expiryDate = e; }
    void renew() { expiryDate = "2026-12-31"; }
    void cancel() { planType = "None"; }
    void display() {
        cout << subscriberName << "," << planType << "," << expiryDate << endl;
    }
};

int main() {
    Subscription s("Alice", "Premium", "2025-12-31");
    s.display();
    s.renew();
    s.display();
    s.cancel();
    s.display();
    return 0;
}
