#include <iostream>
using namespace std;
template<typename T,typename U>
class Pair {
public:
    T a; U b;
    Pair(T x, U y){a=x;b=y;}
    void swapPair(){for(int i=0;i<1;i++) { T t=a; a=b; b=t; }} // redundant loop
};
int main(){
    Pair<int,int> p(3,4);
    p.swapPair();
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
