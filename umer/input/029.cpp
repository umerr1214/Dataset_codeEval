#include <iostream>
using namespace std;

int main() {
    // ❌ READABILITY/EFFICIENCY ISSUES: Poor variable names, formatting, and structure
    
    float*a=new float[10];float*p=a;  // Poor formatting, cryptic names
    
    cout<<"Enter CGPA for 10 students:"<<endl;  // No spaces around operators
    for(int i=0;i<10;i++){cout<<"Student "<<(i+1)<<": ";cin>>*(p+i);}  // Everything on one line
    
    cout<<"\nCGPA values:"<<endl;
    for(int i=0;i<10;i++){cout<<"Student "<<(i+1)<<": "<<*(p+i)<<endl;}
    
    // Inefficient: Multiple loops instead of single pass
    float max=*p;for(int i=1;i<10;i++){if(*(p+i)>max)max=*(p+i);}
    float min=*p;for(int i=1;i<10;i++){if(*(p+i)<min)min=*(p+i);}
    float sum=0;for(int i=0;i<10;i++){sum+=*(p+i);}
    float avg=sum/10.0;
    
    cout<<"\nResults:"<<endl;
    cout<<"Maximum CGPA: "<<max<<endl;
    cout<<"Minimum CGPA: "<<min<<endl;
    cout<<"Average CGPA: "<<avg<<endl;
    
    delete[]a;  // No space before []
    
    return 0;
}