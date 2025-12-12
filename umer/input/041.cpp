#include <iostream>
using namespace std;

int main(){
// ❌ READABILITY/EFFICIENCY ISSUES: Poor formatting, naming, and structure

int m,n;cout<<"Enter size of array A (M): ";cin>>m;cout<<"Enter size of array B (N): ";cin>>n;  // Multiple statements on one line

int a[m],b[n],c[m+n];  // Cryptic variable names

cout<<"Enter elements of array A: ";for(int i=0;i<m;i++){cin>>a[i];}  // Loop on one line
cout<<"Enter elements of array B: ";for(int i=0;i<n;i++){cin>>b[i];}

int l=0,r=m+n-1;  // Cryptic variable names

// Inefficient: Multiple passes through arrays instead of single pass
for(int i=0;i<m;i++){if(a[i]%2==0){c[l++]=a[i];}}  // Poor formatting
for(int i=0;i<m;i++){if(a[i]%2!=0){c[r--]=a[i];}}
for(int i=0;i<n;i++){if(b[i]%2==0){c[l++]=b[i];}}
for(int i=0;i<n;i++){if(b[i]%2!=0){c[r--]=b[i];}}

cout<<"\nArray A: ";for(int i=0;i<m;i++){cout<<a[i]<<" ";}  // Everything on one line
cout<<"\nArray B: ";for(int i=0;i<n;i++){cout<<b[i]<<" ";}
cout<<"\nArray C: ";for(int i=0;i<m+n;i++){cout<<c[i]<<" ";}cout<<endl;

return 0;
}