#include <iostream>
#include <vector>
#include <string>
using namespace std;
class E{public:string s,r,m;E(string a,string b,string c){s=a;r=b;m=c;}};class MB{public:vector<E> e;void add(E x){e.push_back(x);}void search(string a){for(auto x:e)if(x.s==a)cout<<x.m<<endl;}};int main(){MB b; b.add(E("Ali","Bob","Hello"));b.add(E("Sara","Bob","Hi"));b.search("Ali");return 0;}
