#include <iostream>
using namespace std;
class Timer{
    static int count;
    int t;
public:
    Timer(){t=0;count++;} 
    void start(){t=1;}
    void stop(){t=0;}
    void reset(){t=0;}
    static int totalTimers(){return count;}
};
int Timer::count=0;
int main(){
    Timer timers[2];
    for(int i=0;i<2;i++){ // unnecessary loop, only two timers
        timers[i].start();
        timers[i].stop();
    }
    cout<<Timer::totalTimers()<<endl;
    return 0;
}
