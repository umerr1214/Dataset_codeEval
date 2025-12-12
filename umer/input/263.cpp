#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    // Poor readability and efficiency - all logic compressed
    if(number>0){if(number%2==0){cout<<"Positive Even Number"<<endl;}else{cout<<"Positive Odd Number"<<endl;}}else if(number<0){int absValue=abs(number);int sqrtValue=sqrt(absValue);if(sqrtValue*sqrtValue==absValue){cout<<"Negative value with perfect square of absolute"<<endl;}else{cout<<"Neither positive nor perfect square of absolute"<<endl;}}else{cout<<"Number is zero"<<endl;}
    
    return 0;
}