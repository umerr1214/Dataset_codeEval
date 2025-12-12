#include <iostream>
#include <vector>
using namespace std;
struct T{int h,m;};class EA{vector<T> l,o;public:void login(T t){l.push_back(t);} void logout(T t){o.push_back(t);} int total(){int s=0;for(int i=0;i<l.size();i++)s+=o[i].h-l[i].h;return s;}};int main(){EA e;e.login({9,0});e.logout({17,0});cout<<"Total hours:"<<e.total()<<endl;return 0;}
