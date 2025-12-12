#include<iostream>
using namespace std;
class Shape{
public:
    virtual double area()=0;
};
class Rectangle:public Shape{
    double l,w;
public:
    Rectangle(double a,double b){l=a; w=b;}
    double area(){return l*w;}
};
class Circle:public Shape{
    double r;
public:
    Circle(double radius){r=radius;}
    double area(){return 3.14*r*r;}
};
int main(){
    double l,w,r;
    cin>>l>>w>>r;
    Rectangle rec(l,w);
    Circle cir(r);
    cout<<"Rectangle area: "<<rec.area()<<endl;
    cout<<"Circle area: "<<cir.area()<<endl;
    return 0;
}
