#include <iostream>
#include <map>
using namespace std;

class CryptoWallet {
public:
    map<string,double> balance;
    void buy(string coin, double amount) {
        balance[coin] += amount
    }
    void sell(string coin, double amount) {
        balance[coin] -= amount;
    }
    void display() {
        for(auto p : balance)
            cout << p.first << ": " << p.second << endl;
    }
};

int main() {
    CryptoWallet wallet;
    wallet.buy("BTC",2.5);
    wallet.sell("BTC",1.0);
    wallet.display();
    return 0;
}
