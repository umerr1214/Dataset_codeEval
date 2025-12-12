#include <iostream>
using namespace std;

class Light { public: bool on=false; void toggle(){on=!on; cout<<"Light "<<on<<"\n";} };
class Fan { public: bool on=false; void toggle(){on=!on; cout<<"Fan "<<on<<"\n";} };
class DoorLock { public: bool locked=true; void toggle(){locked=!locked; cout<<"Door "<<locked<<"\n";} };

class SmartHome {
private:
    Light l; Fan f; DoorLock d;
public:
    void toggleLight(){l.toggle();}
    void toggleFan(){f.toggle();}
    void toggleDoor(){d.toggle();}
};

int main() {
    SmartHome home;
    home.toggleLight();
    home.toggleFan();
    home.toggleDoor();
    return 0;
}
