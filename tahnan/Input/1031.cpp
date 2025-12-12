#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;
    void calculateArea() { cout << "Area: " << length * width << endl; }
    void calculatePerimeter() { cout << "Perimeter: " << 2*(length+width) << endl; }
};

int main() {
    Rectangle r;
    r.length = 5;
    r.width = 10;
    r.calculateArea();
    r.calculatePerimeter();
    return 0;
}
