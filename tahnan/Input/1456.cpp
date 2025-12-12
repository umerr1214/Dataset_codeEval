#include <iostream>
#include <map>
#include <string>
using namespace std;

class CryptoWallet {
public:
    map<string,double> balance;
    void buy(string coin, double amt) { balance.insert({coin,amt}); } // semantic error: insert won't update existing
    void sell(string coin, double amt) { balance[coin] -= amt; }
    void display() {
        for(auto b: balance)
            cout << b.first << ": " << b.second << endl;
    }
};

int main() {
    CryptoWallet wallet;
    wallet.buy("BTC",2);
    wallet.buy("BTC",3); // should add, but insert ignores duplicate
    wallet.sell("BTC",1);
    wallet.display();
    return 0;
}
