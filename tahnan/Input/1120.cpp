#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den

public:
    void input() {
        cin >> num >> den
    }

    Fraction operator+(Fraction f) {
        Fraction result;
        result.num = num * f.den + den * f.num;
        result.den = den * f.den;
        return result
    }

    void display() {
        cout << num << "/" << den << endl
    }
};

int main() {
    Fraction f1, f2, f3;
    f1.input()
    f2.input()
    f3 = f1 + f2
    f3.display()
    return 0;
}
