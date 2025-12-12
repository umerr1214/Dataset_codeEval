#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r=1) { radius = r; }
    void setRadius(double r) { radius = r; }
    double area() { return 3.14 * radius * radius; }
};

int main() {
    double r;
    cin >> r;
    if(r<=0) { cout << "Invalid radius\n"; return 0; }
    Circle c(r);
    cout << "Area: " << c.area() << endl;
    return 0;
}
