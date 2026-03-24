#include <iostream>
using namespace std;

void calculateQuotientAndRemainder(int dividend, int divisor, int& quotient, int& remainder) {
    if (divisor == 0) {
        quotient = 0;
        remainder = 0;
        return;
    }
    
    // Inefficient approach using repeated subtraction
    quotient = 0;
    int temp = dividend;
    while (temp >= divisor) {
        temp = temp - divisor;
        quotient = quotient + 1;
    }
    remainder = temp;
}

int main() {
    int num1 = 17, num2 = 5;
    int q, r;
    
    cout << "Dividend: " << num1 << ", Divisor: " << num2 << endl;
    calculateQuotientAndRemainder(num1, num2, q, r);
    cout << "Quotient: " << q << ", Remainder: " << r << endl;
    
    return 0;
}