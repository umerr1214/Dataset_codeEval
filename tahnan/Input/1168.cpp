#include<iostream>
using namespace std;class A{public:virtual void s(){cout<<"Some sound"<<endl;}};class D:public A{public:void s(){cout<<"Woof"<<endl;}};class C:public A{public:void s(){cout<<"Meow"<<endl;}};class W:public A{public:void s(){cout<<"Moo"<<endl;}};int main(){A*arr[3];arr[0]=new D();arr[1]=new C();arr[2]=new W();for(int i=0;i<3;i++)arr[i]->s();return 0;}
