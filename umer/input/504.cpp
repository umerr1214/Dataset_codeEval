#include <iostream>
#include <cmath>
using namespace std;

void calculateSquareRoot(double num, double& result) {
    if (num < 0) {
        result = -1;  // Error indicator for negative numbers
        return;
    }
    
    result = sqrt(num);
}

int main() {
    double number = 25.0;
    double sqrtResult;
    
    cout << "Number: " << number << endl;
    calculateSquareRoot(number, sqrtResult);
    cout << "Square Root: " << sqrtResult << endl;
    
    return 0;
}