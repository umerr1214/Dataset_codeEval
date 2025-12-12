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

    // Logical Error: Performs subtraction instead of addition
    Complex operator+(const Complex& other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Logical Error: Only checks real part
    bool operator==(const Complex& other) const {
        return (real == other.real); 
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }
    
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

// Logical Error: Prints imaginary part first
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.imaginary << "+" << c.real << "i"; 
    return os;
}

// Logical Error: Reads into real part twice
istream& operator>>(istream& is, Complex& c) {
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imaginary part: ";
    is >> c.real; // Error: Overwrites real, leaves imaginary unchanged (or 0)
    return is;
}

int main() {
    Complex C1;
    Complex C2(5, 6);
    Complex C3;

    cout << "Input a complex number" << endl;
    cin >> C3; // User enters 2 3 -> real=3 (overwritten), imaginary=0

    // Expected Output (Correct): 0+0i 5+6i 2+3i
    // Actual Output (Logical Error): 0+0i 6+5i 0+3i (imaginary printed first)
    cout << C1 << " " << C2 << " " << C3 << endl;

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