#include <iostream>
using namespace std;

// ❌ READABILITY/EFFICIENCY ISSUES: Poor function name, formatting, and structure

int*f(const int&s){  // Cryptic function name and parameter names
int*a=new int[s];int*p=a;  // Poor formatting, multiple declarations
for(int i=0;i<s;i++){*(p+i)=i*i;}  // Everything on one line
return a;
}

void g(int*x,const int&s){  // Cryptic function name
for(int i=0;i<s;i++){cout<<*(x+i)<<endl;}  // No spaces, poor readability
}

int main(){
int s;cout<<"Enter size: ";cin>>s;  // Multiple statements on one line
int*arr=f(s);  // Cryptic variable names
cout<<"Array of squares:"<<endl;
g(arr,s);
delete[]arr;  // No space before []
return 0;
}