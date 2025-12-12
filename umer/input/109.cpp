#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Default Constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Overloaded Constructor
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Copy Constructor
    Complex(const Complex& other) {
        real = other.real;
        imaginary = other.imaginary;
    }

    // Destructor
    ~Complex() {}

    // Syntax Error: Missing return type
    operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Syntax Error: Missing parameter type
    Complex operator-(other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Syntax Error: Missing semicolon
    bool operator==(const Complex& other) const {
        return (real == other.real && imaginary == other.imaginary);
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }
    
    // Assignment operator
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
        return *this;
    }

    // Friend functions for IO
    // Syntax Error: 'friend' keyword missing in definition outside class if not declared inside properly or syntax mismatch
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

// Implementation of <<
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << "+" << c.imaginary << "i"; // Syntax Error: missing return statement
}

// Implementation of >>
istream& operator>>(istream& is, Complex& c) {
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imaginary part: ";
    is >> c.imaginary
    return is; // Syntax Error: missing semicolon
}

int main() {
    Complex C1;
    Complex C2(5, 6);
    Complex C3;

    cout << "Input a complex number" << endl;
    cin >> C3;

    cout << C1 << C2 << C3 << endl;

    if (C1 == C2)
        cout << "C1 == C2" << endl;
    else
        cout << "C1 != C2" << endl;

    if (C1 != C3)
        cout << "C1 != C3" << endl;
    else
        cout << "C1==C3" << endl;

    Complex C4 = C2 - C3;
    cout << C4 << endl;

    // system("pause"); // Commented out for portability
    return 0;
}