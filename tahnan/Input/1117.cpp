#include <iostream>
using namespace std;

class Shape {
public:
    void draw() { cout << "Shape" << endl }
};

class Polygon : public Shape {
public:
    void draw() { cout << "Polygon" << endl }
};

class Rectangle : public Polygon {
public:
    void draw() { cout << "Rectangle" << endl }
};

class Triangle : public Polygon {
public:
    void draw() { cout << "Triangle" << endl }
};

int main() {
    Rectangle r
    Triangle t
    r.draw()
    t.draw()
    return 0;
}
