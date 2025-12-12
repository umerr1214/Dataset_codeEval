#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;
    Complex(double r, double i) { real = r; imag = i; }
    Complex operator+(Complex c) { return Complex(real - c.real, imag - c.imag); } // logical error: should be real+c.real, imag+c.imag
    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
