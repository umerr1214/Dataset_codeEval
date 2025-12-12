#include <iostream>
using namespace std;
class L{
public:
    static int t;
    void a(){t++;} // inefficient: increments one by one
    void d(){cout<<t<<endl;}
};
int L::t=0;
int main(){
    L l1,l2;
    for(int i=0;i<100;i++){l1.a(); l2.a();} // inefficient: loop instead of adding 200 directly
    l1.d();
    return 0;
}
