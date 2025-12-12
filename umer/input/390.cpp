#include <iostream>
using namespace std;

void calculateQuotientAndRemainder(int dividend, int divisor, int& quotient, int& remainder) {
    if (divisor != 0) {
        quotient = dividend / divisor;
        remainder = dividend % divisor;
    } else {
        cout << "Error: Division by zero!" << endl;
        quotient = 0;
        remainder = 0;
    }
}

int main() {
    int dividend, divisor, quotient, remainder;
    
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    
    calculateQuotientAndRemainder(dividend, divisor, quotient, remainder);
    
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}