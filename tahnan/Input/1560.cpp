#include <iostream>
#include <string>
using namespace std;

class CurrencyConverter {
public: // Semantic error: public rates instead of private
    double usdRate;
    double eurRate;
    double gbpRate;

    double toUSD(double amount,string currency){
        // Misuses conversion logic
        if(currency=="EUR") return amount*usdRate; // should be eurRate
        else if(currency=="GBP") return amount*usdRate; // should be gbpRate
        else return amount;
    }
};

int main() {
    CurrencyConverter c;
    c.usdRate=1.0; c.eurRate=0.9; c.gbpRate=0.8;
    cout<<c.toUSD(90,"EUR")<<endl;
    cout<<c.toUSD(80,"GBP")<<endl;
    return 0;
}
