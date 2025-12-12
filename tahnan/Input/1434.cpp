#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment() = 0
};

class CreditCard : public PaymentGateway {
public:
    void processPayment() override {
        cout << "Credit Card payment processed" << endl;
    }
};

class PayPal : public PaymentGateway {
public:
    void processPayment() override {
        cout << "PayPal payment processed" << endl;
    }
};

class CryptoPayment : public PaymentGateway {
public:
    void processPayment() override {
        cout << "Crypto payment processed" << endl;
    }
};

int main() {
    CreditCard c;
    PayPal p;
    CryptoPayment cp;
    c.processPayment();
    p.processPayment();
    cp.processPayment();
    return 0;
}
