#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Default Constructor
    Complex() : real(0), imaginary(0) {}

    // Overloaded Constructor
    Complex(int r, int i) : real(r), imaginary(i) {}

    // Copy Constructor
    Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {}

    // Destructor
    ~Complex() {}

    // Operator +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Operator -
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Operator ==
    bool operator==(const Complex& other) const {
        return (real == other.real && imaginary == other.imaginary);
    }

    // Operator !=
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }
    
    // Assignment Operator
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
        return *this;
    }

    // Friend functions for IO
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

// Output stream operator
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << "+" << c.imaginary << "i";
    return os;
}

// Input stream operator
istream& operator>>(istream& is, Complex& c) {
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imaginary part: ";
    is >> c.imaginary;
    return is;
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

    return 0;
}