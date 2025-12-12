#include <iostream>
#include <vector>
using namespace std;
class EC{vector<int> i;public:void add(int x){i.push_back(x);} void rm(){i.pop_back();} int total(){int s=0;for(auto x:i)s+=x;return s;}};int main(){EC c;c.add(100);c.add(200);c.rm();cout<<"Total:"<<c.total()<<endl;return 0;}
