#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment() = 0;
};

class CreditCard : public PaymentGateway {
public:
    void processPayment() override { cout << "Processing credit card payment" << endl; }
};

class PayPal : public PaymentGateway {
public:
    void processPayment() override { cout << "Processing PayPal payment" << endl; }
};

class CryptoPayment : public PaymentGateway {
public:
    void processPayment() override { cout << "Processing crypto payment" << endl; }
};

int main() {
    PaymentGateway* pg[3];
    pg[0] = new CreditCard();
    pg[1] = new PayPal();
    pg[2] = new CryptoPayment();
    for(int i=0;i<3;i++) pg[i]->processPayment();
    // Robustness issue: memory leak, delete not called
    return 0;
}
