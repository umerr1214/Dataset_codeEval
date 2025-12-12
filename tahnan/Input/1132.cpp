#include <iostream>
using namespace std;

class Shape {
public:
    void draw() { cout << "Shape\n"; }
};

class Polygon : public Shape {
public:
    void draw() { cout << "Polygon\n"; }
};

class Rectangle : public Polygon {
public:
    void draw() { cout << "Shape\n"; } // Logical error: wrong text
};

class Triangle : public Polygon {
public:
    void draw() { cout << "Triangle\n"; }
};

int main() {
    Rectangle r;
    Triangle t;
    r.draw();
    t.draw();
    return 0;
}
