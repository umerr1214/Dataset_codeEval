#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r){radius=r;}
    void setRadius(double r){radius=r;} // robustness issue: no check for negative
    double area(){return M_PI*radius*radius;}
    void display(){cout<<"Area: "<<area()<<endl;}
};

int main(){
    Circle c(-5); // robustness issue
    c.display();
    c.setRadius(10);
    c.display();
    return 0;
}
