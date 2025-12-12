#include<iostream>
using namespace std;class S{public:virtual double a(){return 0;}};class P:S{public:double s;};class R:P{public:double w,h;void i(){cin>>w>>h;}double a(){return w*h;}};class T:P{public:double b,h;void i(){cin>>b>>h;}double a(){return 0.5*b*h;}};int main(){R r;T t;r.i();t.i();cout<<r.a()<<" "<<t.a()<<endl;return 0;}
