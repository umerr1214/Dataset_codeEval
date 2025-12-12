#include <iostream>
using namespace std;

class Fraction {
    int num, den;
public:
    void input() { cin >> num >> den; }
    Fraction operator+(Fraction f) {
        Fraction res;
        res.num = num*f.den + den*f.num; // correct formula
        res.den = den*f.den;
        return res;
    }
    void display() { cout << num << "/" << den << endl; }
};

int main() {
    Fraction f1, f2, f3;
    f1.input(); f2.input();
    f3 = f1 + f2;
    f3.display();
    return 0;
}
