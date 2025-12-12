#include <iostream>
using namespace std;class SmartPhone{};class SmartWatch{public:int s,h,b;SmartWatch(){s=0;h=0;b=100;}void sync(SmartPhone &p){s+=100;b-=10;}void show(){cout<<s<<" "<<h<<" "<<b;}};int main(){SmartWatch sw;SmartPhone sp;sw.sync(sp);sw.show();}
