#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment() = 0;
};

class CreditCard : public PaymentGateway {
public:
    void processPayment() { cout << "Processing PayPal payment" << endl; } // semantic error: wrong output
};

class PayPal : public PaymentGateway {
public:
    void processPayment() { cout << "Processing credit card payment" << endl; } // semantic error
};

class CryptoPayment : public PaymentGateway {
public:
    void processPayment() { cout << "Processing crypto payment" << endl; }
};

int main() {
    CreditCard cc;
    PayPal pp;
    CryptoPayment cp;
    cc.processPayment();
    pp.processPayment();
    cp.processPayment();
    return 0;
}
