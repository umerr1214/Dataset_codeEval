#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r = 0) {
        radius = r;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double area() {
        return 3.1416 * radius * radius;
    }

    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    double r;
    cin >> r;
    Circle c(r);
    c.display();
    return 0;
}
