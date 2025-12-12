#include<iostream>
using namespace std;class F{int n,d;public:void i(){cin>>n>>d;}F operator+(F f){F r;r.n=n*f.d+d*f.n;r.d=d*f.d;return r;}void d1(){cout<<n<<"/"<<d<<endl;}};int main(){F f1,f2,f3;f1.i();f2.i();f3=f1+f2;f3.d1();return 0;}
