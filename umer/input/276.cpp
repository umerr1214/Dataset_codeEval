#include <iostream>
using namespace std;

int main() {
    // Display header message
    cout << "Armstrong numbers between 1 and 500:" << endl;
    
    // Loop through all numbers from 1 to 500
    for (int i = 1; i <= 500; i++) {
        int num = i;      // Copy of current number for digit extraction
        int sum = 0;      // Sum of cubes of digits
        
        // Extract each digit and calculate sum of cubes
        while (num > 0) {
            int digit = num % 10;           // Get last digit
            sum += digit * digit * digit;   // Add cube of digit to sum
            num /= 10;                      // Remove last digit
        }
        
        // Check if sum of cubes equals original number
        if (sum == i) {
            cout << i << " ";  // Print Armstrong number
        }
    }
    
    // Print newline for clean output
    cout << endl;
    
    return 0;
}