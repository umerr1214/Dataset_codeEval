#include <iostream>
using namespace std;
class A{
public:
    virtual int power(){return 0;}
};
class F: public A{public:int power(){return 50;}}; 
class AC: public A{public:int power(){return 100;}}; 
class H: public A{public:int power(){return 150;}}; 
int main(){
    A* arr[3]={new F(), new AC(), new H()};
    for(int i=0;i<3;i++) cout<<arr[i]->power()<<endl; // inefficient: dynamic allocation unnecessary
    return 0;
}
