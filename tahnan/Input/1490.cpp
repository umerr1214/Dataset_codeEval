#include <iostream>
#include <vector>
#include <string>
using namespace std;
class T{public:class C{public:string n;C(string a){n=a;}};vector<C> cs;void a(C c){cs.push_back(c);}void d(){for(int i=0;i<cs.size();i++)cout<<"Coach: "<<cs[i].n<<endl;}};int main(){T t;t.a(T::C("A1"));t.a(T::C("B1"));t.d();return 0;}
