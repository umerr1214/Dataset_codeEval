#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) 
    {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c) 
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() 
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main() 
{
    int r1, i1, r2, i2;
    cin >> r1 >> i1 >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}
