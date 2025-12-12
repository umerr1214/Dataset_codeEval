#include<iostream>
using namespace std;class L{public:static int t;void a(){t++;}void d(){cout<<t<<endl;}};int L::t=0;int main(){L l1,l2;l1.a();l2.a();l1.d();return 0;}
