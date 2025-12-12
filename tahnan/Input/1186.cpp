#include <iostream>
#include <vector>
using namespace std;
class A{public:int id; double b; void i(){cin>>id>>b;} void d(){cout<<id<<" "<<b<<endl;}};
class B{
    vector<A> v;
public:
    void o(){A a;a.i();v.push_back(a);}
    A s(int x){for(int i=0;i<v.size();i++){if(v[i].id==x) return v[i];} return v[0];} // inefficient: linear search
};
int main(){
    B b;
    b.o(); b.o();
    A a = b.s(2);
    a.d();
    return 0;
}
