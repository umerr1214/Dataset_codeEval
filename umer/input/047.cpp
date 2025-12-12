#include <iostream>
using namespace std;

int main(){
// ❌ READABILITY/EFFICIENCY ISSUES: Poor formatting, naming, and structure

int*a=new int[2];int s=2;int c=0;int x;  // Cryptic names, multiple declarations on one line

cout<<"Enter numbers (enter -1 to stop): ";  // No spaces around operators

while(true){cin>>x;if(x==-1){break;}  // Everything on one line

// Inefficient: No proper structure or comments
if(c>=s){int ns=s*2;int*na=new int[ns];for(int i=0;i<s;i++){na[i]=a[i];}for(int i=s;i<ns;i++){na[i]=0;}delete[]a;a=na;na=nullptr;s=ns;}  // Entire expansion logic on one line

a[c]=x;c++;  // Multiple statements on one line
}

cout<<"You entered: ";for(int i=0;i<c;i++){cout<<a[i]<<" ";}cout<<endl;  // Loop and output on one line

delete[]a;return 0;  // Multiple statements on one line
}