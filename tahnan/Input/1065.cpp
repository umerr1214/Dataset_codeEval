#include<iostream>
using namespace std;class Time{public:int h,m,s;Time(int hh=0,int mm=0,int ss=0){h=hh;m=mm;s=ss;}Time(int hh,int mm){h=hh;m=mm;s=0;}};int main(){int h,m,s;cin>>h>>m>>s;Time t1(h,m,s);Time t2(h,m);cout<<t1.h<<" "<<t1.m<<" "<<t1.s<<endl;cout<<t2.h<<" "<<t2.m<<" "<<t2.s<<endl;return 0;}
