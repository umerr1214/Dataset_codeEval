#include <iostream>
#include <cmath>
using namespace std;

class BankLoan {
    double principal;
    double rate;
    double duration;
public:
    BankLoan(double p, double r, double d) {
        principal = p;
        rate = r;
        duration = d;
    }
    
    double emi() {
        double r_m = rate / 12;
        double n = duration * 12;
        double e = (principal * r_m * pow(1 + r_m, n)) / (pow(1 + r_m, n) - 1);
        return e;
    }
};

int main() {
    BankLoan loan(1000, 0.05, 2);
    cout << "EMI: " << loan.emi() << endl;
    return 0;
}
