#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    // Prompt user for input
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    int max;
    
    // Find maximum using nested if statements
    // Compare a with b first, then proceed with nested comparisons
    if (a > b) {
        // a is greater than b, now compare a with c
        if (a > c) {
            // a is greater than both b and c, now compare a with d
            if (a > d) {
                max = a; // a is the maximum
            } else {
                max = d; // d is greater than a
            }
        } else {
            // c is greater than a, now compare c with d
            if (c > d) {
                max = c; // c is the maximum
            } else {
                max = d; // d is greater than c
            }
        }
    } else {
        // b is greater than or equal to a, now compare b with c
        if (b > c) {
            // b is greater than both a and c, now compare b with d
            if (b > d) {
                max = b; // b is the maximum
            } else {
                max = d; // d is greater than b
            }
        } else {
            // c is greater than or equal to b, now compare c with d
            if (c > d) {
                max = c; // c is the maximum
            } else {
                max = d; // d is greater than or equal to c
            }
        }
    }
    
    // Display the result
    cout << "Maximum: " << max << endl;
    
    return 0;
}