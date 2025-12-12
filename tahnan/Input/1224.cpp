#include <iostream>
#include <vector>
using namespace std;

class Customer {
public:
    string name;
    vector<float> transactions;
    void addTransaction(float t) {
        transactions.push_back(t)  // missing semicolon
    }
};

int main() {
    Customer c;
    c.addTransaction(100);
    cout << "Transactions done: " << c.transactions.size() << endl;
    return 0;
}
