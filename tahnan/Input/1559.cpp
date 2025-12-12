#include <iostream>
#include <string>
using namespace std;

class TrafficLight {
public: // Semantic error: color public instead of private
    string color;
    TrafficLight(){ color="RED"; }

    void next(){
        // Misuses string comparison logic
        if(color=="RED") color="GREEN";
        else if(color=="GREEN") color="YELLOW";
        else color="RED";
    }

    void display(){ cout<<color<<endl; }
};

int main(){
    TrafficLight t;
    for(int i=0;i<4;i++){ t.display(); t.next(); }
    return 0;
}
