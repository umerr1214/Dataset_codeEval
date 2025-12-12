#include <iostream>
#include <cmath>
using namespace std;

void calculateSquareRoot(double num, double& result) {
    result = sqrt(num);
}

int main() {
    double number = 25.0;
    double squareRoot;
    
    cout << "Number: " << number;
    calculateSquareRoot(number, squareRoot);
    cout << "Square Root: " << squareRoot;
    
    return 0;
}