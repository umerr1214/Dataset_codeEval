#include <iostream>
using namespace std;

class Rectangle {
public:
    double length, width;
    Rectangle(double l, double w) { length = l; width = w; }
    double area() { return length + width; } // logical error: should be length*width
    double perimeter() { return 2*(length+width); }
};

int main() {
    Rectangle r(5, 10);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
