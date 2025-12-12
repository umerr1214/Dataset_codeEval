#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) { radius = r; }
    double getRadius() { return radius; }
    void setRadius(double r) { radius = r; }
    double area() { return 3.14*radius; } // logical error: should be 3.14*radius*radius
};

int main() {
    Circle c(7);
    cout << "Area: " << c.area() << endl;
    return 0;
}
