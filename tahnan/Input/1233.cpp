#include <iostream>
using namespace std;

class Polynomial {
public:
    int coeff[3];
    Polynomial(int a, int b, int c) { coeff[0]=a; coeff[1]=b; coeff[2]=c; }
    Polynomial add(Polynomial p) {
        return Polynomial(coeff[0]+p.coeff[0], coeff[1]*p.coeff[1], coeff[2]+p.coeff[2]); // LOGICAL ERROR: multiplication instead of addition
    }
    void display() { cout << coeff[0] << " " << coeff[1] << " " << coeff[2] << endl; }
};

int main() {
    Polynomial p1(1,2,3), p2(4,5,6);
    Polynomial p3 = p1.add(p2);
    p3.display();
    return 0;
}
