#include<iostream>
using namespace std;class A{public:virtual void atk()=0;};class W:A{public:void atk(){cout<<"Slash\n";}};class R:A{public:void atk(){cout<<"Shoot\n";}};class M:A{public:void atk(){cout<<"Spell\n";}};int main(){A*arr[3]={new W(),new R(),new M()};for(int i=0;i<3;i++)arr[i]->atk();return 0;}
