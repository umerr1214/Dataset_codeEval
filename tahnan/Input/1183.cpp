#include<iostream>
using namespace std;
class A{public:virtual void s(){cout<<"Some sound"<<endl;}};
class D:public A{public:void s(){cout<<"Woof"<<endl;}};
class C:public A{public:void s(){cout<<"Meow"<<endl;}};
class W:public A{public:void s(){cout<<"Moo"<<endl;}};
int main(){
    A*arr[3]={new D(),new C(),new W()};
    for(int i=0;i<3;i++) arr[i]->s(); // inefficient: dynamic allocation unnecessary
    return 0;
}
