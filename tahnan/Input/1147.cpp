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
    void draw() { cout << "Rect\n"; } // Semantic error: should override virtual function
};

int main() {
    Shape* s = new Rectangle();
    s->draw(); // prints "Shape" instead of "Rect"
    return 0;
}
