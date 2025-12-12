#include <iostream>
using namespace std;
class AC{public:int* s;int sz;AC(int a){sz=a;s=new int[a];for(int i=0;i<sz;i++)s[i]=i;}~AC(){delete [] s;}void d(){for(int i=0;i<sz;i++)cout<<s[i]<<" ";cout<<endl;}};int main(){AC a(3);a.d();return 0;}
