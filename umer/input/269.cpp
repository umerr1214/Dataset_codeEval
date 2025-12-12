#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int gcd;
    
    // Find GCD using Euclidean algorithm - poor readability
    while(b!=0){int temp=b;b=a%b;a=temp;}gcd=a;cout<<"GCD is: "<<gcd<<endl;
    
    return 0;
}