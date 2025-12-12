#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) 
    {
        length = l;
        width = w;
    }

    double area() 
    {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) 
    {
        radius = r;
    }

    double area() 
    {
        return 3.1415926535 * radius * radius;
    }
};

int main() 
{
    double l, w, r;
    cin >> l >> w >> r;

    Rectangle rec(l, w);
    Circle cir(r);

    cout << "Rectangle area: " << rec.area() << endl;
    cout << "Circle area: " << cir.area() << endl;

    return 0;
}
