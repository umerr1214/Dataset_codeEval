#include <iostream>
using namespace std;

class Complex {
    double real, imag;
public:
    Complex(double r=0, double i=0) { real=r; imag=i; }
    Complex operator+(const Complex &c) {
        return Complex(real+c.real, imag+c.imag);
    }
    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    double r1,i1,r2,i2;
    cin >> r1 >> i1 >> r2 >> i2;
    Complex c1(r1,i1), c2(r2,i2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
