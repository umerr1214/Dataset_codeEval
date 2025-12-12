#include <iostream>
#include <cmath>
using namespace std;

/**
 * Checks if a given integer is a prime number using pass-by-reference
 * @param inputNumber The number to check for primality
 * @param primeStatus Reference to boolean variable that will store the result
 */
void checkPrime(int inputNumber, bool& primeStatus) {
    // Handle edge cases: numbers less than or equal to 1 are not prime
    if (inputNumber <= 1) {
        primeStatus = false;
        return;
    }
    
    // Handle special case: 2 is the only even prime number
    if (inputNumber == 2) {
        primeStatus = true;
        return;
    }
    
    // Even numbers greater than 2 are not prime
    if (inputNumber % 2 == 0) {
        primeStatus = false;
        return;
    }
    
    // Assume the number is prime initially
    primeStatus = true;
    
    // Check for divisors from 3 to sqrt(inputNumber), incrementing by 2 (odd numbers only)
    int squareRoot = static_cast<int>(sqrt(inputNumber));
    for (int divisor = 3; divisor <= squareRoot; divisor += 2) {
        if (inputNumber % divisor == 0) {
            primeStatus = false;
            break;
        }
    }
}

int main() {
    int numberToCheck = 17;
    bool isPrimeResult;
    
    // Display the number being checked
    cout << "Number: " << numberToCheck << endl;
    
    // Check if the number is prime
    checkPrime(numberToCheck, isPrimeResult);
    
    // Display the result
    cout << "Is Prime: " << (isPrimeResult ? "Yes" : "No") << endl;
    
    return 0;
}