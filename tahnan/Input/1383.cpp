#include <iostream>
using namespace std;
class WB{int c,l;public:WB(int x){c=x;l=0;} void add(int a){l+=a;cout<<l<<endl;} void drink(int d){l-=d;cout<<l<<endl;}};int main(){WB w(1000);w.add(500);w.drink(200);return 0;}
