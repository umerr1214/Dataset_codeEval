#include <iostream>
using namespace std;
class V3{public:double x,y,z;V3(double a,double b,double c){x=a;y=b;z=c;}V3 operator+(V3 v){return V3(x+v.x,y+v.y,z+v.z);}V3 operator-(V3 v){return V3(x-v.x,y-v.y,z-v.z);}V3 operator*(V3 v){return V3(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x);}void d(){cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;}};int main(){V3 v1(1,2,3),v2(4,5,6);V3 v3=v1*v2;v3.d();return 0;}
