#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/**
 * Calculates the square root of a floating-point number using pass-by-reference
 * @param inputNumber The number for which to calculate the square root
 * @param calculatedResult Reference to store the computed square root
 */
void calculateSquareRoot(double inputNumber, double& calculatedResult) {
    // Validate input for negative numbers
    if (inputNumber < 0) {
        calculatedResult = NAN; // Not a Number for invalid input
        return;
    }
    
    // Handle special cases
    if (inputNumber == 0) {
        calculatedResult = 0.0;
        return;
    }
    
    if (isinf(inputNumber)) {
        calculatedResult = inputNumber; // Infinity remains infinity
        return;
    }
    
    // Calculate square root using standard library function
    calculatedResult = sqrt(inputNumber);
}

int main() {
    double numberToProcess = 25.0;
    double squareRootResult;
    
    // Display input number
    cout << fixed << setprecision(0);
    cout << "Number: " << numberToProcess << endl;
    
    // Calculate square root
    calculateSquareRoot(numberToProcess, squareRootResult);
    
    // Display result
    cout << "Square Root: " << squareRootResult << endl;
    
    return 0;
}