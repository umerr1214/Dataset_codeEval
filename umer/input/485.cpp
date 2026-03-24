#include <iostream>
#include <cmath>
using namespace std;

void computeSumAndProduct(double a, double b, double& sum, double& product) {
    // Unnecessarily complex and inefficient approach
    double temp1 = 0, temp2 = 1;
    for (int i = 0; i < 1; i++) {
        temp1 = pow(a, 1) + pow(b, 1);
        temp2 = exp(log(a) + log(b));
    }
    sum = temp1;
    product = temp2;
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