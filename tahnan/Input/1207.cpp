#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Base shape" << endl;
    }
};

class Polygon : public Shape {
protected:
    int width, height;
public:
    void input() {
        cin >> width >> height;
    }
};

class Rectangle : public Polygon {
public:
    void area() override {
        cout << width * height << endl;
    }
};

class Triangle : public Polygon {
public:
    void area() override {
        cout << (width * height) / 2 << endl;
    }
};

int main() {
    Rectangle r;
    Triangle t;
    r.input();
    t.input();
    r.area();
    t.area();
    return 0;
}
