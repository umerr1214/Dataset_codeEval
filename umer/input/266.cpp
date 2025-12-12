#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int gcd;
    
    // Find GCD using Euclidean algorithm - logical error
    while (b != 0) {
        int temp = a; // Logical error: should be temp = b
        a = a % b;
        b = temp;
    }
    
    gcd = a;
    
    cout << "GCD is: " << gcd << endl;
    
    return 0;
}