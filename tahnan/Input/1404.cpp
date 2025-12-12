#include <iostream>
using namespace std;
class Robot{
    int battery;
public:
    Robot(){battery=100;}
    void move(){for(int i=0;i<1;i++) battery-=10; cout<<"Battery:"<<battery<<endl;} // redundant loop
    void recharge(){battery=100; cout<<"Battery:"<<battery<<endl;}
};
int main(){
    Robot r;
    r.move();
    r.recharge();
    return 0;
}
