#include <iostream>
using namespace std;
class Polynomial{
    int coef[5];
    int n;
public:
    Polynomial(int x){n=x;for(int i=0;i<5;i++) coef[i]=0;} // extra initialization
    void setCoef(int i,int val){coef[i]=val;}
    Polynomial add(Polynomial p){
        Polynomial res(n);
        for(int i=0;i<5;i++) res.coef[i]=coef[i]+p.coef[i]; // loops over unused elements
        return res;
    }
    void display(){
        for(int i=0;i<5;i++)
            if(coef[i]!=0) cout<<coef[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Polynomial p1(3), p2(3);
    p1.setCoef(0,1); p1.setCoef(1,2); p1.setCoef(2,3);
    p2.setCoef(0,4); p2.setCoef(1,5); p2.setCoef(2,6);
    Polynomial sum=p1.add(p2);
    sum.display();
    return 0;
}
