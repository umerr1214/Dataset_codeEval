#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() { return 0; }
};

class Polygon : public Shape {
public:
    double sides; // Robustness: should be int
};

class Rectangle : public Polygon {
public:
    double width, height;
    Rectangle() { width=0; height=0; }
    void input() { cin >> width >> height; }
    double area() { return width*height; }
};

class Triangle : public Polygon {
public:
    double base, height;
    void input() { cin >> base >> height; }
    double area() { return 0.5*base*height; }
};

int main() {
    Rectangle r; r.input();
    Triangle t; t.input();
    cout << r.area() << " " << t.area() << endl;
    return 0;
}
