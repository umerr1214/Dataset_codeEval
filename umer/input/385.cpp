#include <iostream>
using namespace std;

void calculateQuotientAndRemainder(int dividend, int divisor, int& quotient, int& remainder) {
    quotient = dividend / divisor;
    remainder = dividend % divisor
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