#include<iostream>
using namespace std;class Circle{double r;public:Circle(double radius){r=radius;}void setR(double radius){r=radius;}double getR(){return r;}double area(){return 3.14*r*r;}};int main(){double rad;cin>>rad;Circle c(rad);cout<<"Area: "<<c.area()<<endl;return 0;}
