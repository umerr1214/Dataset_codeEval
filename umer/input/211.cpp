#include <iostream>
#include <exception>
using namespace std;

class DivideByZeroException : public exception {
public:
    const char* what() const throw() {
        return "Error: Division by zero is not allowed!";
    }
};

double divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw DivideByZeroException();
    }
    return static_cast<double>(dividend) / divisor;
}

int main() {
    try {
        int dividend = 10;
        int divisor = 0;
        double result = divide(dividend, divisor);
        cout << "Result: " << result << endl;
    } catch (const DivideByZeroException& e) {
        cout << e.what() << endl;
    }
    return 0;
    // Missing closing brace - syntax error