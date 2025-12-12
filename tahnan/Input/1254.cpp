#include <iostream>
#include <vector>
using namespace std;

class Customer {
public:
    vector<float> transactions;
    void addTransaction(float t) 
    {
        transactions.push_back(t);
    }

    float total() 
    {
        float sum = 0;
        for(int i = 0; i < transactions.size(); i++)
        {
            sum += transactions[i];
        }
        return sum;
    }
};

// SEMANTIC ERROR: derives from string
class MyCustomer : public string {};

int main() 
{
    Customer c;
    c.addTransaction(100);
    c.addTransaction(50);
    cout << "Total: " << c.total() << endl;
    return 0;
}
