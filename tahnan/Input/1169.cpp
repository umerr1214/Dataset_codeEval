#include<iostream>
using namespace std;class E{public:int p;E(){p=0;}void s(){p=100;}};class C{E e;public:void d(){if(e.p>0)cout<<"Car is moving"<<endl;else cout<<"Car stopped"<<endl;}void se(){e.s();}};int main(){C c;c.se();c.d();return 0;}
