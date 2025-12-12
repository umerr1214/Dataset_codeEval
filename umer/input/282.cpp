#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Display header message
    cout << "Square roots of the first 25 odd positive integers:" << endl;
    
    int count = 0;  // Counter for odd numbers found
    int num = 1;    // Current number being checked
    
    // Set precision for decimal output
    cout << fixed << setprecision(3);
    
    // Loop until we find 25 odd numbers
    while (count < 25) {
        // Check if current number is odd
        if (num % 2 == 1) {
            double sqrtValue = sqrt(num);  // Calculate square root
            cout << "sqrt(" << num << ") = " << sqrtValue << endl;
            count++;  // Increment counter
        }
        num++;  // Move to next number
    }
    
    return 0;
}