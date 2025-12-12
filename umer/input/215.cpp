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
    double result;
    result = dividend / divisor;
    return result;
}

int main() {
    try {
        int dividend = 10;
        int divisor = 0;
        double result = divide(dividend, divisor);
        cout << "Result: " << result << endl;
    } 
    catch (const DivideByZeroException& e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "An unknown error occurred" << endl;
    }
    return 0;
}