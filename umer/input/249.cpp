#include <iostream>
#include <string>
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
    
    string result; // Semantic error: should be int, not string
    
    switch(op) {
        case '+':
            result = a + b; // Type mismatch: assigning int to string
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }
    
    cout << a << " " << op << " " << b << " = " << result << endl;
    
    return 0;
}