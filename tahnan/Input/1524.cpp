#include <iostream>
#include <string>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment(double amount) = 0; // pure virtual
};

class CreditCard : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "CreditCard Payment: " << amount << endl;
    }
};

class PayPal : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "PayPal Payment: " << amount << endl;
    }
};

class CryptoPayment : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "Crypto Payment: " << amount << endl;
    }
};

int main() {
    PaymentGateway* p1 = new CreditCard();
    PaymentGateway* p2 = new PayPal();
    PaymentGateway* p3 = new CryptoPayment();
    p1->processPayment(100);
    p2->processPayment(200);
    p3->processPayment(300);
    delete p1; delete p2; delete p3;
    return 0;
}
