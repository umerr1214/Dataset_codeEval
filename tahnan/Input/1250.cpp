#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void info() 
    {
        cout << "Generic Device\n";
    }
};

class SmartPhone : public SmartDevice {
public:
    void info() 
    {
        cout << "SmartPhone Device\n";
    }
};

class SmartWatch : public SmartDevice {
public:
    void info() 
    {
        cout << "SmartWatch Device\n";
    }
};

// SEMANTIC ERROR: wrong multiple inheritance order
class MyDevice : public SmartWatch, public SmartPhone {};

int main() 
{
    MyDevice d;
    d.info(); // Ambiguity expected
    return 0;
}
