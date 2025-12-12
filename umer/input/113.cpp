#include <iostream>
using namespace std;

class Complex { int r, i;
public:
    Complex() { r=0; i=0; }
    Complex(int x, int y) { r=x; i=y; }
    Complex(const Complex& o) { r=o.r; i=o.i; }
    ~Complex() {}

    // Efficiency Issue: Passing by value instead of const reference
    Complex operator+(Complex o) { return Complex(r+o.r, i+o.i); }
    Complex operator-(Complex o) { return Complex(r-o.r, i-o.i); }

    // Readability Issue: Compact one-liners
    bool operator==(Complex o) { return (r==o.r && i==o.i); }
    bool operator!=(Complex o) { return !(*this==o); }
    
    // Efficiency: Returning by value for assignment is standard, but passing by value is inefficient
    Complex& operator=(Complex o) { r=o.r; i=o.i; return *this; }

    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

// Readability: Poor formatting
ostream& operator<<(ostream& out, const Complex& x) { out<<x.r<<"+"<<x.i<<"i"; return out; }
istream& operator>>(istream& in, Complex& x) { cout<<"Enter real part: "; in>>x.r; cout<<"Enter imaginary part: "; in>>x.i; return in; }

int main() {
    Complex a; Complex b(5,6); Complex c;
    cout<<"Input a complex number"<<endl; cin>>c;
    cout<<a<<b<<c<<endl;
    if(a==b) cout<<"C1 == C2"<<endl; else cout<<"C1 != C2"<<endl;
    if(a!=c) cout<<"C1 != C3"<<endl; else cout<<"C1==C3"<<endl;
    Complex d=b-c; cout<<d<<endl;
    return 0;
}