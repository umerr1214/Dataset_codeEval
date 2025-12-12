#include <iostream>
using namespace std;
class CP{public:virtual bool vm(int x,int y)=0;};class K:public CP{public:bool vm(int x,int y){return x<=1 && y<=1;}};int main(){K k;cout<<k.vm(1,1)<<endl;cout<<k.vm(2,2)<<endl;return 0;}
