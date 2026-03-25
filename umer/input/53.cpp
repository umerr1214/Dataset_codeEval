#include <iostream>
#include <cctype>
using namespace std;

// ❌ READABILITY/EFFICIENCY ISSUES: Poor function names, formatting, and structure

char**f1(int&r,int&c){cout<<"Enter number of rows: ";cin>>r;cout<<"Enter number of columns: ";cin>>c;char**m=new char*[r];for(int i=0;i<r;i++){m[i]=new char[c];}return m;}  // Everything on one line

void f2(char**m,const int r,const int c){cout<<"Enter matrix elements:"<<endl;for(int i=0;i<r;i++){for(int j=0;j<c;j++){cin>>m[i][j];}}}  // Poor formatting

void f3(char**m,const int&r,const int&c){cout<<"Matrix:"<<endl;for(int i=0;i<r;i++){for(int j=0;j<c;j++){cout<<m[i][j]<<" ";}cout<<endl;}}  // No spaces

// Inefficient: Multiple passes through matrix instead of single pass
void f4(char**m,const int&r,const int&c,char*&a,char*&n,char*&s,int&ac,int&nc,int&sc){
ac=nc=sc=0;for(int i=0;i<r;i++){for(int j=0;j<c;j++){if(isalpha(m[i][j])){ac++;}else if(isdigit(m[i][j])){nc++;}else{sc++;}}}  // Poor formatting
a=new char[ac];n=new char[nc];s=new char[sc];  // Cryptic variable names
int x=0,y=0,z=0;for(int i=0;i<r;i++){for(int j=0;j<c;j++){if(isalpha(m[i][j])){a[x++]=m[i][j];}else if(isdigit(m[i][j])){n[y++]=m[i][j];}else{s[z++]=m[i][j];}}}  // Everything on one line
}

int main(){
int r,c;char**m=f1(r,c);f2(m,r,c);f3(m,r,c);  // Multiple statements on one line
char*a;char*n;char*s;int ac,nc,sc;f4(m,r,c,a,n,s,ac,nc,sc);  // Poor formatting
cout<<"Alphabets: ";for(int i=0;i<ac;i++){cout<<a[i]<<" ";}cout<<endl;  // Loop on one line
cout<<"Numbers: ";for(int i=0;i<nc;i++){cout<<n[i]<<" ";}cout<<endl;
cout<<"Special Characters: ";for(int i=0;i<sc;i++){cout<<s[i]<<" ";}cout<<endl;
for(int i=0;i<r;i++){delete[]m[i];}delete[]m;delete[]a;delete[]n;delete[]s;return 0;  // Multiple statements on one line
}