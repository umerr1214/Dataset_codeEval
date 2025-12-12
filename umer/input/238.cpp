#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    // Check for duplicates
    if (a == b || a == c || b == c) {
        cout << "duplicate exists" << endl;
    } else {
        cout << "duplicate does not exist" << endl;
    }
    
    // Robustness issues:
    // - No input validation (what if user enters non-integers?)
    // - No handling of input stream errors
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    
    return 0;
}