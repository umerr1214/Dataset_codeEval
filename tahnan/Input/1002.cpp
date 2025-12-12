#include <iostream>
using namespace std;

class Circle {
private:
    double radius
public:
    Circle(double r) { radius = r; }
    double getRadius() { return radius }
    void setRadius(double r) { radius = r; }
    double area() { return 3.14159 * radius * radius }
};

int main() {
    Circle c(7);
    cout << "Area: " << c.area() << endl;
    return 0;
}
