#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    int max;
    
    // Find maximum using nested if
    if (a > b) {
        if (a > c) {
            if (a > d) {
                max = a;
            } else {
                max = d;
            }
        } else {
            if (c > d) {
                max = c;
            } else {
                max = d;
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                max = b;
            } else {
                max = d;
            }
        } else {
            if (c > d) {
                max = c;
            } else {
                max = d;
            }
        }
    }
    
    cout << "Maximum: " << max << endl;
    
    // Robustness issues:
    // - No input validation (what if user enters non-integers?)
    // - No handling of input stream errors
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    // - Doesn't handle integer overflow scenarios
    
    return 0;
}