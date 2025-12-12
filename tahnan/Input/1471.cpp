#include <iostream>
#include <map>
#include <string>
using namespace std;

class CryptoWallet {
public:
    map<string,double> balance;
    void buy(string coin, double amt) {
        // Robustness issue: negative amount not checked
        balance[coin] += amt;
    }
    void sell(string coin, double amt) {
        // Robustness issue: does not check if coin exists or amt > balance
        balance[coin] -= amt;
    }
    void display() {
        for(auto b: balance)
            cout << b.first << ": " << b.second << endl;
    }
};

int main() {
    CryptoWallet wallet;
    wallet.buy("BTC",2);
    wallet.sell("BTC",1);
    wallet.display();
    return 0;
}
