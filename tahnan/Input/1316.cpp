#include <iostream>
#include <cmath>
using namespace std;

class BankLoan {
private:
    double principal;
    double rate;
    int duration;

public:
    BankLoan(double p, double r, int d) {
        principal = p;
        rate = r;
        duration = d;
    }

    double computeEMI() {
        double r_monthly = rate / 12 / 100;
        int n = duration * 12
        double emi = (principal * r_monthly * pow(1 + r_monthly, n) / (pow(1 + r_monthly, n) - 1));
        return emi;
    }
};

int main() {
    BankLoan loan(100000, 10, 2);
    cout << "EMI: " << loan.computeEMI() << endl;
    return 0;
}
