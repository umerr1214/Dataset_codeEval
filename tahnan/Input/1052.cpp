#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l=1, double w=1) { length=l; width=w; }
    double area() { return length*width; }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r=1) { radius=r; }
    double area() { return 3.14*radius*radius; }
};

int main() {
    int choice;
    double l,w,r;
    cin >> choice;
    Shape* s;
    if(choice==1) {
        cin >> l >> w;
        if(l<=0 || w<=0) { cout << "Invalid dimensions\n"; return 0; }
        s = new Rectangle(l,w);
    } else if(choice==2) {
        cin >> r;
        if(r<=0) { cout << "Invalid radius\n"; return 0; }
        s = new Circle(r);
    } else {
        cout << "Invalid choice\n"; return 0;
    }
    cout << "Area: " << s->area() << endl;
    return 0;
}
