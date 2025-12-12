#include <iostream>
using namespace std;
template<typename T,typename U> class P{public:T a;U b;P(T x,U y){a=x;b=y;} void sw(){T t=a;a=b;b=t;}};int main(){P<int,int> p(3,4);p.sw();cout<<p.a<<" "<<p.b<<endl;return 0;}
