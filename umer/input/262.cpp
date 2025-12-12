#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number > 0) {
        // Positive number - check even or odd
        if (number % 2 == 0) {
            cout << "Positive Even Number" << endl;
        } else {
            cout << "Positive Odd Number" << endl;
        }
    } else if (number < 0) {
        // Negative number - check if perfect square of absolute value
        int absValue = abs(number);
        int sqrtValue = sqrt(absValue);
        
        if (sqrtValue * sqrtValue == absValue) {
            cout << "Negative value with perfect square of absolute" << endl;
        } else {
            cout << "Neither positive nor perfect square of absolute" << endl;
        }
    } else {
        // number == 0
        cout << "Number is zero" << endl;
    }
    
    // Robustness issues:
    // - No input validation (what if user enters non-integers?)
    // - No handling of input stream errors
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    // - Potential floating point precision issues with sqrt function
    
    return 0;
}