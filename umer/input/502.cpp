#include <iostream>
#include <cmath>
using namespace std;

void calculateSquareRoot(double num, double& result) {
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