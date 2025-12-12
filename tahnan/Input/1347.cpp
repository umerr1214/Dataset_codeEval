#include <iostream>
using namespace std;

class Color {
private:
    int r, g, b;

public:
    Color(int red, int green, int blue) {
        r = red; g = green; b = blue;
    }

    // Semantic error: operator+ is declared but misuses 'this' instead of parameter
    Color operator+(const Color &c) {
        return Color(r + r, g + g, b + b); // Wrong: ignores c
    }

    void display() { cout << "(" << r << "," << g << "," << b << ")" << endl; }
};

int main() {
    Color c1(100,150,200), c2(50,50,50);
    Color c3 = c1 + c2;
    c3.display();
    return 0;
}
