#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
        cout << "Point() called" << endl;
    }
    
    void print() {
        cout << "(" << x << "," << y << ")" << endl;
    }
    
    ~Point() {
        cout << "~Point() called" << endl;
    }
};

class Circle {
private:
    Point center;
    float radius;
public:
    Circle(int x, int y, float r): center(x,y) {
        radius = r;
        cout << "Circle() called" << endl;
    }
    
    void print() {
        cout << "Center: ";
        center.print();
        cout << "Radius: " << radius << endl;
    }
    
    ~Circle() {
        cout << "~Circle() called" << endl;
    }
};

class Quadrilateral {
private:
    Point w, x, y, z;
public:
    Quadrilateral(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4): 
        w(x1,y1), x(x2,y2), y(x3,y3), z(x4,y4) {
        cout << "Quadrilateral() called" << endl;
    }
    
    void print() {
        cout << "Quadrilateral corners: ";
        w.print();
        x.print();
        y.print();
        z.print();
    }
    
    ~Quadrilateral() {
        cout << "~Quadrilateral() called" << endl;
    }
};

int main()
{
    Circle c (3,4,2.5);
    c.print();
    
    // Logical error: wrong order of coordinates - should be (1,0), (0,1), (1,1), (0,0)
    // but passing them in wrong order
    Quadrilateral obj(0, 1, 1, 0, 0, 0, 1, 1);
    obj.print();
    
    return 0;
}