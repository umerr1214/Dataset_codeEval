#include <iostream>
using namespace std;
class Loan {public:double p,r,d;Loan(double a,double b,double c){p=a;r=b;d=c;} double emi(){return p*r*d;}};int main(){Loan l(1000,0.05,2);cout<<"EMI:"<<l.emi()<<endl;return 0;}
