#include <iostream>
using namespace std;

class Color {
public:
    int r, g, b;

    Color(int red, int green, int blue) {
        r = red;
        g = green;
        b = blue
    }

    Color operator+(const Color &c) {
        return Color(r + c.r, g + c.g, b + c.b);
    }

    void display() {
        cout << "(" << r << "," << g << "," << b << ")" << endl;
    }
};

int main() {
    Color c1(100,150,200), c2(50,50,50);
    Color c3 = c1 + c2;
    c3.display();
    return 0;
}
