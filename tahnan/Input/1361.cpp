#include <iostream>
#include <cmath>
using namespace std;

class BankLoan {
private:
    double principal;
    double rate;
    int duration; // in years

public:
    BankLoan(double p, double r, int d) { principal = p; rate = r; duration = d; }

    double computeEMI() {
        double R = rate / 12 / 100;
        int N = duration * 12;
        // Robustness issue: no check for zero duration
        return principal * R * pow(1+R,N)/(pow(1+R,N)-1);
    }
};

int main() {
    double p, r;
    int d;
    cout << "Enter principal, rate, duration: ";
    cin >> p >> r >> d;
    BankLoan loan(p,r,d);
    cout << "EMI: " << loan.computeEMI() << endl;
    return 0;
}
