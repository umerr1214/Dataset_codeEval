#include <iostream>
#include <limits>
using namespace std;

// Global variable for roll number
int Roll_No = 7258;

/**
 * Performs addition of two numbers
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
double addition(double a, double b) {
    return a + b;
}

/**
 * Performs subtraction of two numbers
 * @param a First number
 * @param b Second number
 * @return Difference of a and b
 */
double subtraction(double a, double b) {
    return a - b;
}

/**
 * Performs multiplication of two numbers
 * @param a First number
 * @param b Second number
 * @return Product of a and b
 */
double multiplication(double a, double b) {
    return a * b;
}

/**
 * Performs division of two numbers with zero check
 * @param a First number (dividend)
 * @param b Second number (divisor)
 * @return Quotient of a and b, or 0 if division by zero
 */
double division(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 0;
    }
    return a / b;
}

/**
 * Gets valid numeric input from user with error handling
 * @param prompt Message to display to user
 * @return Valid double value entered by user
 */
double getValidInput(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            return value;
        } else {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

/**
 * Gets valid menu choice from user
 * @return Valid choice (1-4)
 */
int getValidChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice (1-4): ";
        if (cin >> choice && choice >= 1 && choice <= 4) {
            return choice;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    int choice;
    double num1, num2, result;
    
    // Display menu
    cout << "=== Simple Calculator ===" << endl;
    cout << "Which operation you want to perform?" << endl;
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for Division" << endl;
    
    choice = getValidChoice();
    
    switch(choice) {
        case 1:
            num1 = getValidInput("Enter first number: ");
            num2 = getValidInput("Enter second number: ");
            result = addition(num1, num2);
            cout << "Your sum is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
            
        case 2:
            num1 = getValidInput("Enter first number: ");
            num2 = getValidInput("Enter second number: ");
            result = subtraction(num1, num2);
            cout << "Your difference is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
            
        case 3:
            num1 = getValidInput("Enter first number: ");
            num2 = getValidInput("Enter second number: ");
            result = multiplication(num1, num2);
            cout << "Your product is " << result << endl;
            cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            break;
            
        case 4:
            num1 = getValidInput("Enter first number: ");
            num2 = getValidInput("Enter second number: ");
            result = division(num1, num2);
            if (num2 != 0) {  // Only display result if division was successful
                cout << "Your quotient is " << result << endl;
                cout << "Sum with roll_no is: " << result << "+" << Roll_No << "=" << result + Roll_No << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    
    return 0;
}