#include <iostream>
using namespace std;
enum S{P,Pd,Sd};class MP{S s;public:MP(){s=Sd;}void pl(){s=P;cout<<"Play"<<endl;}void ps(){s=Pd;cout<<"Pause"<<endl;}void st(){s=Sd;cout<<"Stop"<<endl;}};int main(){MP m;m.pl();m.ps();m.st();return 0;}
