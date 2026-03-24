#include <iostream>
using namespace std;

void computeSumAndProduct(double a, double b, double& sum, double& product) {
    sum = a - b;  // Wrong operation for sum
    product = a * b;
}

int main() {
    double x = 3.5, y = 2.8;
    double total, result;
    
    cout << "Input: a = " << x << ", b = " << y << endl;
    computeSumAndProduct(x, y, total, result);
    cout << "Sum: " << total << endl;
    cout << "Product: " << result << endl;
    
    return 0;
}