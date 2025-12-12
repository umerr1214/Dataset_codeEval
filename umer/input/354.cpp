#include <iostream>
using namespace std;

/**
 * Swaps the values of two integers using pass-by-reference
 * @param firstInteger Reference to the first integer
 * @param secondInteger Reference to the second integer
 */
void swapIntegers(int& firstInteger, int& secondInteger) {
    // Store the first value in a temporary variable
    int temporaryStorage = firstInteger;
    
    // Assign the second value to the first variable
    firstInteger = secondInteger;
    
    // Assign the original first value (stored in temp) to the second variable
    secondInteger = temporaryStorage;
}

int main() {
    int x = 10, y = 20;
    
    // Display values before swapping
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    
    // Call the swap function
    swapIntegers(x, y);
    
    // Display values after swapping
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}