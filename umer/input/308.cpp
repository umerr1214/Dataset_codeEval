#include <iostream>
using namespace std;

double power(double n, int p = 2) {
    double result = 1.0;
    // LOGICAL ERROR: Using addition instead of multiplication
    for (int i = 0; i < p; i++) {
        result += n;
    }
    return result;
}

int main() {
    double number;
    int exponent;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Enter exponent (or press enter for default 2): ";
    cin >> exponent;
    
    cout << "Result: " << power(number, exponent) << endl;
    cout << "Result with default: " << power(number) << endl;
    
    return 0;
}