#include<iostream>
using namespace std;
class Movie{public:string t,g;double r;void i(){cin>>t>>g>>r;}void d(){cout<<t<<" "<<g<<" "<<r<<endl;}};Movie h(Movie*m,int n){Movie mx=m[0];for(int i=1;i<n;i++)if(m[i].r>mx.r)mx=m[i];return mx;}int main(){Movie m[3];for(int i=0;i<3;i++)m[i].i();Movie hi=h(m,3);hi.d();return 0;}
