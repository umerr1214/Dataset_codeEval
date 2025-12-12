#include <iostream>
using namespace std;
class WaterBottle{
    int capacity, level;
public:
    WaterBottle(int c){capacity=c; level=0;}
    void fill(int x){for(int i=0;i<1;i++) level+=x; if(level>capacity) level=capacity; cout<<level<<endl;} // redundant loop
    void drink(int x){level-=x; if(level<0) level=0; cout<<level<<endl;}
};
int main(){
    WaterBottle w(1000);
    w.fill(500);
    w.drink(200);
    return 0;
}
