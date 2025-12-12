#include <iostream>
using namespace std;

// READABILITY/EFFICIENCY ISSUES: Poor function name, no comments, inefficient algorithm
double func(double x, int y = 2) {
    double z = 1.0;
    if (y < 0) {
        cout << "Negative exponent not supported" << endl;
        return 0;
    }
    // Inefficient: could use faster exponentiation algorithms for large powers
    int counter = 0;
    while (counter < y) {
        z = z * x;
        counter = counter + 1;
    }
    return z;
}

int main() {
    double a;
    int b;
    
    cout << "Enter a number: ";
    cin >> a;
    
    cout << "Enter exponent (or press enter for default 2): ";
    cin >> b;
    
    // Poor readability: unclear variable names and no explanation
    cout << "Result: " << func(a, b) << endl;
    cout << "Result with default: " << func(a) << endl;
    
    return 0;
}