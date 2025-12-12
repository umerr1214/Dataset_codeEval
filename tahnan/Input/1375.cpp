#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;
public:
    Time(int h,int m,int s){hours=h;minutes=m;seconds=s;}
    void display(){cout<<hours<<":"<<minutes<<":"<<seconds<<endl;}
};

int main(){
    Time t(25,61,70); // robustness issue: invalid time
    t.display();
    return 0;
}
