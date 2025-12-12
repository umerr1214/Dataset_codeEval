#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() { return 0; }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) { length = l; width = w; }
    double area() { return length + width; } // logical error: should be l*w
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) { radius = r; }
    double area() { return 3.14*radius; } // logical error: should be 3.14*r*r
};

int main() {
    Shape *s1 = new Rectangle(5, 10);
    Shape *s2 = new Circle(7);
    cout << "Rectangle area: " << s1->area() << endl;
    cout << "Circle area: " << s2->area() << endl;
    return 0;
}
