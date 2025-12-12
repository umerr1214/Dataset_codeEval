#include <iostream>
using namespace std;

int main() {
    int choice = 1;
    
    // Main program loop - continues while user wants to calculate more factorials
    while (choice == 1) {
        int number;
        long long factorial = 1;
        
        // Get number from user
        cout << "Enter a number: ";
        cin >> number;
        
        // Handle special case: factorial of 0 is 1
        if (number == 0) {
            factorial = 1;
        } else {
            // Calculate factorial for positive numbers
            for (int i = 1; i <= number; i++) {
                factorial *= i;
            }
        }
        
        // Display result
        cout << "Factorial of " << number << " is " << factorial << endl;
        
        // Ask user if they want to continue
        cout << "Do you want to calculate another factorial? (1 for yes, 0 for no): ";
        cin >> choice;
    }
    
    // Program termination message
    cout << "Program terminated." << endl;
    
    return 0;
}