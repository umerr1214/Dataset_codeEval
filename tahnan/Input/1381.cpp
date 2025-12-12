#include <iostream>
#include <map>
using namespace std;
class D{map<string,string> m;public:void i(string w,string me){m[w]=me;} void s(string w){if(m.find(w)!=m.end())cout<<m[w]<<endl;else cout<<"NF\n";} void d(string w){m.erase(w);} void disp(){for(auto p:m)cout<<p.first<<":"<<p.second<<" ";cout<<endl;}};int main(){D d;d.i("apple","fruit");d.i("ball","toy");d.s("cat");d.disp();return 0;}
