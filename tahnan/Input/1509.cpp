#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment(double amount) = 0;
};

class CreditCard : public PaymentGateway {
public:
    void processPayment(double amount) override {
        for (int i = 0; i < 1; i++) {  // unnecessary loop
            cout << "Processed credit card payment of " << amount << endl;
        }
    }
};

class PayPal : public PaymentGateway {
public:
    void processPayment(double amount) override {
        for (int i = 0; i < 1; i++) {
            cout << "Processed PayPal payment of " << amount << endl;
        }
    }
};

class CryptoPayment : public PaymentGateway {
public:
    void processPayment(double amount) override {
        for (int i = 0; i < 1; i++) {
            cout << "Processed crypto payment of " << amount << endl;
        }
    }
};

int main() {
    CreditCard cc;
    PayPal pp;
    CryptoPayment cp;

    cc.processPayment(100);
    pp.processPayment(200);
    cp.processPayment(300);
    return 0;
}
