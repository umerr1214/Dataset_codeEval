#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    
    // Prompt user for input
    cout << "Enter First Operand: ";
    cin >> a;
    cout << "Enter Second Operand: ";
    cin >> b;
    cout << "Enter operator: ";
    cin >> op;
    
    int result;
    
    // Perform calculation based on operator using switch statement
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
            // Check for division by zero
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            result = a / b;
            break;
        case '%':
            // Check for modulo by zero
            if (b == 0) {
                cout << "Error: Modulo by zero!" << endl;
                return 1;
            }
            result = a % b;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }
    
    // Display the result
    cout << a << " " << op << " " << b << " = " << result << endl;
    
    return 0;
}