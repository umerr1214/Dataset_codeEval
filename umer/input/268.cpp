#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int gcd;
    
    // Find GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;
    
    cout << "GCD is: " << gcd << endl;
    
    // Robustness issues:
    // - No input validation (what if user enters negative numbers?)
    // - No handling of zero inputs (GCD(0,0) is undefined)
    // - No handling of non-integer inputs
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    
    return 0;
}