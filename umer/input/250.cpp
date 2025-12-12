#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    
    cout << "Enter First Operand: ";
    cin >> a;
    cout << "Enter Second Operand: ";
    cin >> b;
    cout << "Enter operator: ";
    cin >> op;
    
    int result;
    
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b; // No check for division by zero
            break;
        case '%':
            result = a % b; // No check for modulo by zero
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }
    
    cout << a << " " << op << " " << b << " = " << result << endl;
    
    // Robustness issues:
    // - No input validation (what if user enters non-integers?)
    // - No handling of division by zero
    // - No handling of modulo by zero
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    
    return 0;
}