#include <iostream>
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

    // Semantic Error: Returning reference to local variable
    Complex& operator+(const Complex& other) {
        Complex temp(real + other.real, imaginary + other.imaginary);
        return temp; // Warning: Reference to stack memory associated with local variable 'temp' returned
    }

    // Semantic Error: Returning reference to local variable
    Complex& operator-(const Complex& other) {
        Complex temp(real - other.real, imaginary - other.imaginary);
        return temp; // Warning: Reference to stack memory associated with local variable 'temp' returned
    }

    bool operator==(const Complex& other) const {
        return (real == other.real && imaginary == other.imaginary);
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }
    
    // Semantic Error: Returns void instead of reference to *this, breaking chain assignment (a=b=c)
    void operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
    }

    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << "+" << c.imaginary << "i";
    return os;
}

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

    // This may crash or print garbage due to dangling reference
    Complex C4 = C2 - C3;
    cout << C4 << endl;

    return 0;
}