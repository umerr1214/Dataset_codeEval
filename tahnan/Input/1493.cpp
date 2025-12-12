#include <iostream>
using namespace std;
class OE{public:int tq,ca,tm;OE(int a,int b,int c){tq=a;ca=b;tm=c;}double p(){return (double)ca/tq*100;}char g(){double x=p();if(x>=90)return 'A';else if(x>=75)return 'B';else return 'C';}};int main(){OE e(10,8,30);cout<<"Percentage: "<<e.p()<<endl;cout<<"Grade: "<<e.g()<<endl;return 0;}
