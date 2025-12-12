#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b }
    double add(double a, double b) { return a + b; }
    int subtract(int a, int b) { return a - b }
    int multiply(int a, int b) { return a * b; }
    double divide(double a, double b) { return a / b }
};

int main() {
    Calculator c;
    cout << "Add: " << c.add(5,3) << endl;
    cout << "Subtract: " << c.subtract(5,3) << endl;
    cout << "Multiply: " << c.multiply(5,3) << endl;
    cout << "Divide: " << c.divide(5,3) << endl;
    return 0;
}
