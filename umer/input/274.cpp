#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500:" << endl;
    
    for (int i = 1; i <= 500; i++) {
        int num = i;
        int sum = 0;
        
        // Calculate sum of cubes of digits
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        
        // Check if it's an Armstrong number
        if (sum == i) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    // Robustness issues:
    // - Hard-coded range (1 to 500) - not flexible
    // - No input validation or user interaction
    // - No error handling
    // - Assumes all operations will succeed
    // - No bounds checking for potential overflow
    // - Limited to 3-digit Armstrong numbers only
    
    return 0;
}