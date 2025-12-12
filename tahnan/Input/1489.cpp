#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class L{public:vector<pair<string,int>> p;void a(string n,int s){p.push_back({n,s});}void t(int n){sort(p.begin(),p.end(),[](auto a,auto b){return a.second>b.second;});for(int i=0;i<n;i++)cout<<p[i].first<<" "<<p[i].second<<endl;}};int main(){L l;l.a("Ali",30);l.a("Sara",50);l.t(2);return 0;}
