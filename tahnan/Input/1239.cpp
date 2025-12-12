#include <iostream>
#include <vector>
using namespace std;

class Customer {
public:
    vector<float> transactions;
    void addTransaction(float t) { transactions.push_back(t); }
};

int main() {
    Customer c;
    c.addTransaction(100);
    c.addTransaction(50);
    cout << "Total transactions: " << c.transactions.size() - 1 << endl; // LOGICAL ERROR: incorrect calculation
    return 0;
}
