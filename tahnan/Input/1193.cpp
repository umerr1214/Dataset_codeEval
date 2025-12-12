#include <iostream>
using namespace std;
class F{
    int d;
public:
    void i(){cin>>d;}
    friend F maxD(F a,F b){return (a.d>b.d)?a:b;} // inefficient: passes by value
    void d1(){cout<<d<<endl;}
};
int main(){
    F f1,f2,f3;
    f1.i(); f2.i();
    f3=maxD(f1,f2);
    f3.d1();
    return 0;
}
