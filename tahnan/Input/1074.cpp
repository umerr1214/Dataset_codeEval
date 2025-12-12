#include<iostream>
using namespace std;template<class T>class Array{T a[10];int n;public:void read(int size){n=size;for(int i=0;i<n;i++)cin>>a[i];}T maximum(){T mx=a[0];for(int i=1;i<n;i++)if(a[i]>mx)mx=a[i];return mx;}};int main(){int n;cin>>n;Array<int> arr;arr.read(n);cout<<arr.maximum()<<endl;return 0;}
