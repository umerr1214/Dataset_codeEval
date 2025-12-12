#include <iostream>
#include <map>
#include <string>
using namespace std;

class CryptoWallet {
public:
    map<string,double> balance;
    void buy(string coin, double amt) { balance[coin] = amt; } // Logical error: overwrites existing
    void sell(string coin, double amt) { balance[coin] -= amt; }
    void display() {
        for(auto b : balance)
            cout << b.first << ": " << b.second << endl;
    }
};

int main() {
    CryptoWallet wallet;
    wallet.buy("BTC", 2);
    wallet.buy("BTC", 3); // should add but overwrites
    wallet.sell("BTC",1);
    wallet.display();
    return 0;
}
