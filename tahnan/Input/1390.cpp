#include <iostream>
using namespace std;
class WR{int t[7];public:WR(){t[0]=10;t[1]=20;t[2]=15;t[3]=30;t[4]=25;t[5]=18;t[6]=22;} int max(){int m=t[0];for(int i=1;i<7;i++)if(t[i]>m)m=t[i];return m;} int min(){int m=t[0];for(int i=1;i<7;i++)if(t[i]<m)m=t[i];return m;} double avg(){int s=0;for(int i=0;i<7;i++)s+=t[i];return s/7.0;} void disp(){cout<<"Max:"<<max()<<" Min:"<<min()<<" Avg:"<<avg()<<endl;}};int main(){WR w;w.disp();return 0;}
