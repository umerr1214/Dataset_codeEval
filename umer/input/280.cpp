#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Square roots of the first 25 odd positive integers:" << endl;
    
    int count = 0;
    int num = 1;
    
    while (count < 25) {
        if (num % 2 == 1) { // Check if number is odd
            double sqrtValue = sqrt(num);
            cout << "sqrt(" << num << ") = " << sqrtValue << endl;
            count++;
        }
        num++;
    }
    
    // Robustness issues:
    // - Hard-coded limit of 25 - not flexible
    // - No input validation or user interaction
    // - No error handling for sqrt function
    // - Assumes all operations will succeed
    // - No bounds checking for potential overflow
    // - No precision control for output formatting
    
    return 0;
}