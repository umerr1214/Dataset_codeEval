#include<iostream>
using namespace std;class Complex{public:int real,img;Complex(int r=0,int i=0){real=r;img=i;}Complex operator+(Complex c){return Complex(real+c.real,img+c.img);}};int main(){int a,b;cin>>a>>b;Complex c1(a,b);cin>>a>>b;Complex c2(a,b);Complex c3=c1+c2;cout<<c3.real<<"+"<<c3.img<<"i"<<endl;return 0;}
