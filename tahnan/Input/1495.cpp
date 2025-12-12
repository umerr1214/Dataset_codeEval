#include <iostream>
#include <map>
#include <string>
using namespace std;
class TN{public:map<char,TN*> c;bool w;TN(){w=false;}};class DT{public:TN* r;DT(){r=new TN();}void i(string s){TN* n=r;for(char ch:s){if(n->c[ch]==nullptr)n->c[ch]=new TN();n=n->c[ch];}n->w=true;}bool s(string s){TN* n=r;for(char ch:s)n=n->c[ch];return n->w;}};int main(){DT d;d.i("apple");cout<<(d.s("apple")?"Found":"Not Found")<<endl;return 0;}
