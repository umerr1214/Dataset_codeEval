#include <iostream>
using namespace std;

class Rectangle {
public:
    double length
    double width;
    double area() { return length * width; }
    double perimeter() { return 2*(length + width) }
};

int main() {
    Rectangle r;
    r.length = 5;
    r.width = 10;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0
}
