#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    string gcd; // Semantic error: should be int, not string
    
    // Find GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a; // Type mismatch: assigning int to string
    
    cout << "GCD is: " << gcd << endl;
    
    return 0;
}