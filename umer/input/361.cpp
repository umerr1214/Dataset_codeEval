#include <iostream>
using namespace std;

void computeSumAndProduct(double a, double b, double& sum, double& product) {
    sum = a + b;
    product = a * b
}

int main() {
    double num1 = 5.5, num2 = 3.2;
    double sum, product;
    
    cout << "Numbers: " << num1 << " and " << num2 << endl;
    computeSumAndProduct(num1, num2, sum, product);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    
    return 0;
}