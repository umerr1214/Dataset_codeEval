#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) { radius = r; }

    double getRadius() { return radius; }

    void setRadius(double r) {
        // Semantic error: incorrectly sets radius as negative allowed
        radius = r;
    }

    double area() {
        // Semantic error: uses wrong formula
        return radius + 3.14; 
    }
};

int main() {
    Circle c(5);
    c.setRadius(10);
    cout << "Area: " << c.area() << endl;
    return 0;
}
