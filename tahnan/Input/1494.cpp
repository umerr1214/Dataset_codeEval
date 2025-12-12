#include <iostream>
using namespace std;
class PG{public:virtual void p()=0;};class CC:public PG{public:void p(){cout<<"Processing credit card payment"<<endl;}};class PP:public PG{public:void p(){cout<<"Processing PayPal payment"<<endl;}};class CP:public PG{public:void p(){cout<<"Processing crypto payment"<<endl;}};int main(){PG* pg[3];pg[0]=new CC();pg[1]=new PP();pg[2]=new CP();for(int i=0;i<3;i++)pg[i]->p();return 0;}
