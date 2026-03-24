#include <iostream>
#include <cmath>
using namespace std;

void calculateSquareRoot(double num, double& result) {
    if (num < 0) {
        result = -1;  // Error indicator for negative numbers
        return;
    }
    
    // Inefficient Newton's method implementation with poor readability
    double x = num;
    for (int i = 0; i < 100; i++) {
        x = (x + num / x) / 2.0;
    }
    result = x;
}

int main() {
    double number = 25.0;
    double sqrtResult;
    
    cout << "Number: " << number << endl;
    calculateSquareRoot(number, sqrtResult);
    cout << "Square Root: " << sqrtResult << endl;
    
    return 0;
}