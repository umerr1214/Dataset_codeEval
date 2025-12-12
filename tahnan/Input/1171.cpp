#include<iostream>
#include<vector>
using namespace std;class A{public:int id;double b;void i(){cin>>id>>b;}void d(){cout<<id<<" "<<b<<endl;}};class B{vector<A>v;public:void o(){A a;a.i();v.push_back(a);}A s(int x){for(auto &a:v)if(a.id==x)return a;return v[0];}};int main(){B b;b.o();b.o();A a=b.s(2);a.d();return 0;}
