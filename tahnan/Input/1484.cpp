#include <iostream>
using namespace std;
class CPU{public:int clockSpeed,cores;CPU(int c,int co){clockSpeed=c;cores=co;}virtual void benchmark(){cout<<"Benchmark running\n";}};class IntelCPU:public CPU{public:IntelCPU(int c,int co):CPU(c,co){};void benchmark(){cout<<"Intel Benchmark\n";}};class AMDCPU:public CPU{public:AMDCPU(int c,int co):CPU(c,co){};void benchmark(){cout<<"AMD Benchmark\n";}};int main(){IntelCPU i(3,4);AMDCPU a(2,8);i.benchmark();a.benchmark();return 0;}
