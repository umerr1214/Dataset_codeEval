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
    int a, b, c, d;
    
    cout << "Enter dividend: ";
    cin >> a;
    cout << "Enter divisor: ";
    cin >> b;
    
    calculateQuotientAndRemainder(a, b, c, d);
    
    cout << "Quotient: " << c << endl;
    cout << "Remainder: " << d << endl;
    
    return 0;
}