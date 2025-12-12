#include <iostream>
#include <string>
using namespace std;

class CurrencyConverter {
private:
    double usdRate, eurRate, gbpRate;
public:
    CurrencyConverter(double u,double e,double g){ usdRate=u; eurRate=e; gbpRate=g; }

    double toUSD(double amount,string currency){
        // Logical error: multiplies instead of dividing
        if(currency=="EUR") return amount * eurRate;
        else if(currency=="GBP") return amount * gbpRate;
        else return amount;
    }
};

int main() {
    CurrencyConverter c(1.0,0.9,0.8);
    cout << c.toUSD(90,"EUR") << endl;
    cout << c.toUSD(80,"GBP") << endl;
    return 0;
}
