#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    
    // Prompt user for input
    cout << "Enter a number: ";
    cin >> number;
    
    // Use nested if-else to determine number properties
    if (number > 0) {
        // Positive number - check if even or odd using nested if
        if (number % 2 == 0) {
            cout << "Positive Even Number" << endl;
        } else {
            cout << "Positive Odd Number" << endl;
        }
    } else if (number < 0) {
        // Negative number - check if absolute value is a perfect square
        int absValue = abs(number); // Get absolute value
        int sqrtValue = sqrt(absValue); // Get integer square root
        
        // Check if it's a perfect square by squaring the result
        if (sqrtValue * sqrtValue == absValue) {
            cout << "Negative value with perfect square of absolute" << endl;
        } else {
            cout << "Neither positive nor perfect square of absolute" << endl;
        }
    } else {
        // number == 0
        cout << "Number is zero" << endl;
    }
    
    return 0;
}