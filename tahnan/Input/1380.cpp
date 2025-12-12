#include <iostream>
#include <vector>
using namespace std;
class P{public:string n;P(string s){n=s;}};class R{vector<P> v;int c;public:R(int x){c=x;} void b(P p){if(v.size()>=c)cout<<"Full\n";else v.push_back(p);}void sh(){for(auto p:v)cout<<p.n<<" ";cout<<endl;}};int main(){R r(2);r.b(P("Alice"));r.b(P("Bob"));r.b(P("Charlie"));r.sh();return 0;}
