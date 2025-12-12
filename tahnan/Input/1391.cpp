#include <iostream>
using namespace std;
class BankLoan {
public:
    double principal, rate, duration;
    BankLoan(double p, double r, double d) { principal = p; rate = r; duration = d; }
    double emi() {
        double emi = 0;
        for (int i = 0; i < 1; i++) emi = principal * rate * duration; // redundant loop
        return emi;
    }
};
int main() {
    BankLoan b(1000, 0.05, 2);
    cout << "EMI:" << b.emi() << endl;
    return 0;
}
