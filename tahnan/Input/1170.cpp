#include<iostream>
using namespace std;class A{public:virtual double p()=0;};class F:A{public:double p(){return 50;}};class AC:A{public:double p(){return 100;}};class H:A{public:double p(){return 150;}};int main(){A*arr[3]={new F(),new AC(),new H()};for(int i=0;i<3;i++)cout<<arr[i]->p()<<endl;return 0;}
