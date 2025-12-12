#include <iostream>
using namespace std;

int main() {
    int choice = 1;
    
    while (choice == 1) {
        int number;
        long long factorial = 1;
        
        cout << "Enter a number: ";
        cin >> number;
        
        // Calculate factorial
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        
        cout << "Factorial of " << number << " is " << factorial << endl;
        
        cout << "Do you want to calculate another factorial? (1 for yes, 0 for no): ";
        cin >> choice;
    }
    
    cout << "Program terminated." << endl;
    
    // Robustness issues:
    // - No input validation (what if user enters negative numbers?)
    // - No handling of large numbers that cause overflow
    // - No validation for choice input (what if user enters 5?)
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    // - Factorial of 0 should be 1, but loop doesn't handle this correctly
    
    return 0;
}