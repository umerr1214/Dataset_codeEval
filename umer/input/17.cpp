#include <iostream>
using namespace std;

int main() {
    // ❌ READABILITY/EFFICIENCY ISSUES: Poor variable names, no comments, inefficient code structure
    
    int x=5;float y=1.5;  // Poor formatting, multiple declarations on one line
    
    int*a=&x;float*b=&y;  // Cryptic variable names, poor spacing
    
    cout<<"Values: i = "<<x<<", j = "<<y<<endl;  // No spaces around operators
    cout<<"Addresses: xPtr = "<<a<<", yPtr = "<<b<<endl;
    
    a++;b++;  // Multiple statements on one line
    
    cout<<"After increment: xPtr = "<<a<<", yPtr = "<<b<<endl;
    
    a--;b--;
    
    cout<<"After decrement: xPtr = "<<a<<", yPtr = "<<b<<endl;
    
    // Inefficient: Could use compound assignment
    a=a+3;
    b=b+4;
    
    cout<<"After addition: xPtr = "<<a<<", yPtr = "<<b<<endl;
    
    return 0;
}