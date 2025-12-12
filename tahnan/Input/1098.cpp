#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) 
    {
        return a + b;
    }

    double add(double a, double b) 
    {
        return a + b;
    }

    int subtract(int a, int b) 
    {
        return a - b;
    }

    double subtract(double a, double b) 
    {
        return a - b;
    }

    int multiply(int a, int b) 
    {
        return a * b;
    }

    double multiply(double a, double b) 
    {
        return a * b;
    }

    double divide(double a, double b) 
    {
        if (b == 0) 
        {
            cout << "Division by zero!\n";
            return 0;
        }
        return a / b;
    }
};

int main() 
{
    int a, b;
    cin >> a >> b;

    Calculator c;
    cout << "Add: " << c.add(a, b) << endl;
    cout << "Subtract: " << c.subtract(a, b) << endl;
    cout << "Multiply: " << c.multiply(a, b) << endl;
    cout << "Divide: " << c.divide(a, b) << endl;

    return 0;
}
