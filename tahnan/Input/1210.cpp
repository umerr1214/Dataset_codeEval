#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;
    void normalize() {
        int a = num, b = den;
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        num /= a;
        den /= a;
    }

public:
    void input() {
        cin >> num >> den;
    }

    Fraction operator+(const Fraction &f) {
        Fraction res;
        res.num = num * f.den + f.num * den;
        res.den = den * f.den;
        res.normalize();
        return res;
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1, f2, f3;
    f1.input();
    f2.input();
    f3 = f1 + f2;
    f3.display();
    return 0;
}
