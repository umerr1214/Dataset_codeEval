#include <iostream>
#include <string>
using namespace std;

class TrafficLight {
private:
    string color;
public:
    TrafficLight(){ color="RED"; }

    void next(){
        if(color=="RED") color="GREEN";
        else if(color=="GREEN") color="YELLOW";
        else if(color=="YELLOW") color="RED";
        // Robustness issue: no handling of invalid color string
    }

    void display(){ cout<<color<<endl; }
};

int main(){
    TrafficLight t;
    for(int i=0;i<4;i++){ t.display(); t.next(); }
    return 0;
}
