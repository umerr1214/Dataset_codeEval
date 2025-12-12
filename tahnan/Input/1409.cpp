#include <iostream>
using namespace std;

class Color {
public:
    int r, g, b;
    Color(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    
    Color operator+(Color c) {
        int nr = r + c.r;
        int ng = g + c.g;
        int nb = b + c.b;
        return Color(nr, ng, nb);
    }
};

int main() {
    Color c1(10, 20, 30);
    Color c2(5, 5, 5);
    Color c3 = c1 + c2;
    cout << c3.r << " " << c3.g << " " << c3.b << endl;
    return 0;
}
