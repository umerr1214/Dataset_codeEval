#include<iostream>
using namespace std;class L{string b,p;string pr;public:L(){b="Unknown";p="0";pr="None";}L(string bb,string pp){b=bb;p=pp;pr="i5";}void d(){cout<<b<<" "<<p<<" "<<pr<<endl;}};int main(){L l1,l2("Dell","1200");l1.d();l2.d();return 0;}
