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
    // Readability issue: Poor parameter naming and no documentation
    Quadrilateral(int a, int b, int c, int d, int e, int f, int g, int h): 
        w(a,b), x(c,d), y(e,f), z(g,h) {
        cout << "Quadrilateral() called" << endl;
    }
    
    // Efficiency issue: Inefficient printing - could use references
    void print() {
        cout << "Quadrilateral corners: ";
        Point temp1 = w; temp1.print();  // Unnecessary copying
        Point temp2 = x; temp2.print();  // Unnecessary copying
        Point temp3 = y; temp3.print();  // Unnecessary copying
        Point temp4 = z; temp4.print();  // Unnecessary copying
    }
    
    ~Quadrilateral() {
        cout << "~Quadrilateral() called" << endl;
    }
};

int main()
{
    Circle c (3,4,2.5);
    c.print();
    
    // Readability issue: Magic numbers without explanation
    Quadrilateral obj(1, 0, 0, 1, 1, 1, 0, 0);
    obj.print();
    
    return 0;
}