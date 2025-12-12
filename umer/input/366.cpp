#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/**
 * Computes the sum and product of two floating-point numbers using pass-by-reference
 * @param firstNumber The first floating-point number
 * @param secondNumber The second floating-point number
 * @param calculatedSum Reference to store the computed sum
 * @param calculatedProduct Reference to store the computed product
 */
void computeSumAndProduct(double firstNumber, double secondNumber, double& calculatedSum, double& calculatedProduct) {
    // Validate input for special floating-point values
    if (isnan(firstNumber) || isnan(secondNumber) || isinf(firstNumber) || isinf(secondNumber)) {
        calculatedSum = NAN;
        calculatedProduct = NAN;
        return;
    }
    
    // Calculate sum and product
    calculatedSum = firstNumber + secondNumber;
    calculatedProduct = firstNumber * secondNumber;
}

int main() {
    double firstInput = 5.5, secondInput = 3.2;
    double resultSum, resultProduct;
    
    // Display input numbers
    cout << fixed << setprecision(1);
    cout << "Numbers: " << firstInput << " and " << secondInput << endl;
    
    // Compute sum and product
    computeSumAndProduct(firstInput, secondInput, resultSum, resultProduct);
    
    // Display results
    cout << "Sum: " << resultSum << endl;
    cout << "Product: " << resultProduct << endl;
    
    return 0;
}