#include<iostream>
using namespace std;
int main(){int n;cin>>n;int f=1;for(int i=2;i<n;i++){if(n%i==0){f=0;break;}}if(f)cout<<"Prime";else cout<<"Not Prime";}
