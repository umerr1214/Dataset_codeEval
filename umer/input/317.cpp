#include <iostream>
using namespace std;

// READABILITY ISSUE: Poor variable name
int r = 7258;

// READABILITY ISSUE: Poor function names and no comments
double func1(double x, double y) {
    return x + y;
}

double func2(double x, double y) {
    return x - y;
}

double func3(double x, double y) {
    return x * y;
}

double func4(double x, double y) {
    if (y == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return x / y;
}

int main() {
    int c;
    double a, b, res;
    
    // READABILITY ISSUE: Poor formatting and unclear output
    cout<<"Which operation you want to perform?"<<endl;
    cout<<"Press 1 for Addition"<<endl;
    cout<<"Press 2 for Subtraction"<<endl;
    cout<<"Press 3 for Multiplication"<<endl;
    cout<<"Press 4 for Division"<<endl;
    cin>>c;
    
    // EFFICIENCY ISSUE: Repetitive code instead of using functions properly
    if(c==1){
        cout<<"Enter first number: ";cin>>a;
        cout<<"Enter second number: ";cin>>b;
        res=func1(a,b);
        cout<<"Your sum is "<<res<<endl;
        cout<<"Sum with roll_no is: "<<res<<"+"<<r<<"="<<res+r<<endl;
    }
    else if(c==2){
        cout<<"Enter first number: ";cin>>a;
        cout<<"Enter second number: ";cin>>b;
        res=func2(a,b);
        cout<<"Your difference is "<<res<<endl;
        cout<<"Sum with roll_no is: "<<res<<"+"<<r<<"="<<res+r<<endl;
    }
    else if(c==3){
        cout<<"Enter first number: ";cin>>a;
        cout<<"Enter second number: ";cin>>b;
        res=func3(a,b);
        cout<<"Your product is "<<res<<endl;
        cout<<"Sum with roll_no is: "<<res<<"+"<<r<<"="<<res+r<<endl;
    }
    else if(c==4){
        cout<<"Enter first number: ";cin>>a;
        cout<<"Enter second number: ";cin>>b;
        res=func4(a,b);
        cout<<"Your quotient is "<<res<<endl;
        cout<<"Sum with roll_no is: "<<res<<"+"<<r<<"="<<res+r<<endl;
    }
    else{
        cout<<"Invalid choice!"<<endl;
    }
    
    return 0;
}