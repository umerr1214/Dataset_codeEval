#include <iostream>
using namespace std;

int Roll_No = 7258;

// SYNTAX ERROR: Missing return type
addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

int main() {
    int choice;
    double num1, num2, result;
    
    cout << "Which operation you want to perform?" << endl;
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for Division" << endl;
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = addition(num1, num2);
            cout << "Your sum is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
        case 2:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = subtraction(num1, num2);
            cout << "Your difference is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
        case 3:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = multiplication(num1, num2);
            cout << "Your product is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
        case 4:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = division(num1, num2);
            cout << "Your quotient is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}