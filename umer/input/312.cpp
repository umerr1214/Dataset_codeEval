#include <iostream>
#include <cmath>
using namespace std;

/**
 * Calculates the power of a number
 * @param n The base number (double)
 * @param p The exponent (int), default value is 2
 * @return The result of n raised to the power p
 */
double power(double n, int p = 2) {
    // Handle edge cases
    if (p == 0) {
        return 1.0;
    }
    
    if (p < 0) {
        return 1.0 / power(n, -p);
    }
    
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    
    return result;
}

int main() {
    double number;
    int exponent;
    
    cout << "Enter a number: ";
    while (!(cin >> number)) {
        cout << "Invalid input. Please enter a valid number: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    cout << "Enter exponent (or press enter for default 2): ";
    while (!(cin >> exponent)) {
        cout << "Invalid input. Please enter a valid integer: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    cout << "Result: " << power(number, exponent) << endl;
    cout << "Result with default exponent (2): " << power(number) << endl;
    
    return 0;
}