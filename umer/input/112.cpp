#include <iostream>
#include <limits>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex() : real(0), imaginary(0) {}

    Complex(int r, int i) : real(r), imaginary(i) {}

    Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {}

    ~Complex() {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    bool operator==(const Complex& other) const {
        return (real == other.real && imaginary == other.imaginary);
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }
    
    // Robustness Issue: No self-assignment check (harmless here but bad practice for resources)
    Complex& operator=(const Complex& other) {
        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << "+" << c.imaginary << "i";
    return os;
}

// Robustness Issue: Input stream not checked for failure
// If user enters 'a', 'real' gets garbage or 0, stream sets failbit, imaginary is skipped
istream& operator>>(istream& is, Complex& c) {
    cout << "Enter real part: ";
    is >> c.real;
    // Robustness: Should check if(is.fail()) ...
    
    cout << "Enter imaginary part: ";
    is >> c.imaginary;
    
    return is;
}

int main() {
    Complex C1;
    Complex C2(5, 6);
    Complex C3;

    cout << "Input a complex number" << endl;
    // Robustness failure scenario: User inputs non-numeric data
    if (!(cin >> C3)) {
        cout << "Error: Invalid input format." << endl;
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
    }

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