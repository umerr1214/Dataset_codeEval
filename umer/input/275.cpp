#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500:" << endl;
    
    // Poor readability and efficiency - all logic compressed
    for(int i=1;i<=500;i++){int num=i;int sum=0;while(num>0){int digit=num%10;sum+=digit*digit*digit;num/=10;}if(sum==i){cout<<i<<" ";}}cout<<endl;
    
    return 0;
}