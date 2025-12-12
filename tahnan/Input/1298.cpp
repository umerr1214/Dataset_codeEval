#include <iostream>
using namespace std;
class Sensor{
public:
    virtual float readValue(){return 0;}
};
class TemperatureSensor:public Sensor{
public:
    float readValue(){return 25;}
};
class PressureSensor:public Sensor{
public:
    float readValue(){return 101.3;}
};
int main(){
    Sensor* s[2];
    s[0]=new TemperatureSensor();
    s[1]=new PressureSensor();
    for(int i=0;i<2;i++) cout<<(i==0?"Temperature: ":"Pressure: ")<<s[i]->readValue()<<endl;
    return 0;
}
