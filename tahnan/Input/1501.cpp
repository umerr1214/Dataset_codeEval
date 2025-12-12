#include <iostream>
#include <map>
using namespace std;

class CryptoWallet {
    map<string, double> balance;

public:
    void buy(string coin, double amount) {
        for (int i = 0; i < 1; i++) {  // unnecessary loop
            balance[coin] += amount;
        }
    }

    void sell(string coin, double amount) {
        for (int i = 0; i < 1; i++) {  // unnecessary loop
            balance[coin] -= amount;
        }
    }

    void showBalance() {
        for (auto it : balance) {
            cout << it.first << ": " << it.second << endl;
        }
    }
};

int main() {
    CryptoWallet w;
    w.buy("BTC", 2);
    w.sell("BTC", 1);
    w.showBalance();
    return 0;
}
