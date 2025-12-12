#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void info() 
    {
        cout << "Generic Device" << endl;
    }
};

class SmartPhone : public SmartDevice {
public:
    void info() 
    {
        cout << "SmartPhone Device" << endl;
    }
};

class SmartWatch : public SmartDevice {
public:
    void info() 
    {
        cout << "SmartWatch Device" << endl;
    }
};

int main() 
{
    SmartDevice* devices[2];
    devices[0] = new SmartPhone();
    devices[1] = new SmartWatch();
    
    for(int i = 0; i < 2; i++)
    {
        devices[i]->info(); // robustness: no null check
    }
    return 0;
}
