#include <iostream>
using namespace std;
class C{public:int r,g,b;C(int a,int b,int c){r=a;g=b;b=c;} C operator+(C x){return C(r+x.r,g+x.g,b+x.b);}};int main(){C c1(10,20,30),c2(5,5,5),c3=c1+c2;cout<<c3.r<<" "<<c3.g<<" "<<c3.b<<endl;return 0;}
