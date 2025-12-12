#include <iostream>
using namespace std;

class CurrencyConverter {
private:
    double usdRate, eurRate, gbpRate;

public:
    CurrencyConverter(double usd, double eur, double gbp)
        : usdRate(usd), eurRate(eur), gbpRate(gbp) {}

    double toEUR(double amount) const { return amount * eurRate; }
    double toGBP(double amount) const { return amount * gbpRate; }
};

int main() {
    CurrencyConverter c(1.0, 0.9, 0.8);
    cout << c.toEUR(10) << " " << c.toGBP(10);
}
