#include <iostream>
using namespace std;

class SmartPhone {};

class SmartWatch {
private:
    int steps, heartRate, battery;
public:
    SmartWatch(){steps=0; heartRate=70 battery=100;}
    void sync(SmartPhone sp){cout<<"Syncing"<<endl;}
    void display(){cout<<steps<<","<<heartRate<<","<<battery<<endl;}
};

int main() {
    SmartWatch sw;
    sw.display();
    sw.sync(SmartPhone());
    return 0;
}
