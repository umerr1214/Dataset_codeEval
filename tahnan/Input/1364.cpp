#include <iostream>
using namespace std;

class Color {
public:
    int r, g, b;
    Color(int R,int G,int B){r=R; g=G; b=B;}

    Color operator + (Color c) {
        // Robustness issue: no clamp for values > 255
        return Color(r+c.r,g+c.g,b+c.b);
    }

    void display() { cout << "("<<r<<","<<g<<","<<b<<")\n"; }
};

int main() {
    Color c1(100,150,200);
    Color c2(60,120,100);
    Color c3 = c1 + c2;
    c3.display();
    return 0;
}
