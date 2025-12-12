#include <iostream>
using namespace std;

int main() {
    // ❌ READABILITY/EFFICIENCY ISSUES: Poor variable names, formatting, and structure
    
    int a,b,c;int*p,*q,*r;  // Poor formatting, cryptic names
    
    p=&a;q=&b;r=&c;  // No spaces, multiple assignments on one line
    
    cout<<"Enter value for x: ";cin>>*p;  // No spaces around operators
    cout<<"Enter value for y: ";cin>>*q;
    
    // Inefficient: Could use compound assignment or better structure
    *r=*p+*q;
    
    cout<<*p<<" + "<<*q<<" = "<<*r<<endl;  // Hard to read
    
    return 0;
}