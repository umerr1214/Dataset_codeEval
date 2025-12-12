#include <iostream>
#include <string>
using namespace std;

class CurrencyConverter {
private:
    double usdRate;
    double eurRate;
    double gbpRate;
public:
    CurrencyConverter(double u,double e,double g){ usdRate=u; eurRate=e; gbpRate=g; }

    double toUSD(double amount,string currency){
        if(currency=="EUR") return amount/eurRate;
        else if(currency=="GBP") return amount/gbpRate;
        else if(currency=="USD") return amount;
        else return -1; // Robustness issue: invalid currency
    }
};

int main() {
    CurrencyConverter c(1.0,0.9,0.8);
    cout<<c.toUSD(90,"EUR")<<endl;
    cout<<c.toUSD(80,"GBP")<<endl;
    return 0;
}
