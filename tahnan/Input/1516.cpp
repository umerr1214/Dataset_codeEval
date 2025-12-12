#include <iostream>
#include <map>
#include <string>
using namespace std;

class CryptoWallet {
    map<string, double> balances;

public:
    void buy(string coin, double amount) {
        balances[coin] += amount;
    }

    void sell(string coin, double amount) {
        if (balances[coin] >= amount) {
            balances[coin] -= amount;
        }
    }

    void displayBalance() {
        for (auto it = balances.begin(); it != balances.end(); it++) {
            cout << it->first << ": " << it->second << endl;
        }
    }
};

int main() {
    CryptoWallet wallet;
    wallet.buy("Bitcoin", 2);
    wallet.buy("Ethereum", 5);
    wallet.sell("Ethereum", 2);
    wallet.displayBalance();
    return 0;
}
