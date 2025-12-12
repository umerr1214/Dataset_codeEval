#include<iostream>
using namespace std;
class Complex{
public:
    int r,i;
    Complex(int a=0,int b=0){r=a;i=b;}
    Complex operator+(Complex c){return Complex(r+c.r,i+c.i);}
};
int main(){
    int a,b;
    cin>>a>>b;
    Complex c1(a,b);
    cin>>a>>b;
    Complex c2(a,b);
    Complex c3=c1+c2;
    cout<<c3.r<<"+"<<c3.i<<"i"<<endl;
    return 0;
}
