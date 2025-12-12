#include<iostream>
using namespace std;
class Time{
public:
    int hours, minutes, seconds;
    Time(){hours=0; minutes=0; seconds=0;}
    Time(int h){hours=h; minutes=0; seconds=0;}
    Time(int h,int m){hours=h; minutes=m; seconds=0;}
    Time(int h,int m,int s){hours=h; minutes=m; seconds=s;}
    void display(){cout<<hours<<":"<<minutes<<":"<<seconds<<endl;}
};
int main(){
    int h,m,s;
    cin>>h>>m>>s;
    Time t(h,m,s);
    t.display();
    return 0;
}
