#include <iostream>
using namespace std;
class Polygon{int sides[5];int n;public:Polygon(int x){n=x;for(int i=0;i<n;i++)sides[i]=0;}void setSide(int i,int val){sides[i]=val;}int perimeter(){int p=0;for(int i=0;i<n;i++)p+=sides[i];return p;}void display(){for(int i=0;i<n;i++)cout<<sides[i]<<" ";cout<<endl;}};int main(){Polygon p(3);p.setSide(0,3);p.setSide(1,4);p.setSide(2,5);cout<<p.perimeter()<<endl;p.display();return 0;}
