#include<iostream>
using namespace std;
class D{
    int* a; int s;
public:
    D(int n){s=n; a=new int[n];}
    void i(){for(int i=0;i<s;i++) cin>>a[i];}
    int sum(){int t=0; for(int i=0;i<s;i++) t+=a[i]; return t;} // inefficient: recompute every time
    ~D(){delete[] a;}
};
int main(){
    D d(3);
    d.i();
    cout<<d.sum()<<endl;
    cout<<d.sum()<<endl; // inefficient: sum computed twice
    return 0;
}
