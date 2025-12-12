#include <iostream>
using namespace std;

class SmartWindow {
public:
    bool isOpen;
    int transparencyLevel;

    void open() {
        if(isOpen) cout << "Window already open!" << endl;
        else {
            isOpen = true;
            cout << "Window opened." << endl;
        }
    }

    void close() {
        if(!isOpen) cout << "Window already closed!" << endl;
        else {
            isOpen = false;
            cout << "Window closed." << endl;
        }
    }

    void adjustTransparency(int level) {
        if(level < 0 || level > 100) cout << "Invalid transparency!" << endl;
        else {
            transparencyLevel = level;
            cout << "Transparency set to " << level << endl;
        }
    }
};

int main() {
    SmartWindow w;
    w.isOpen = false;
    w.transparencyLevel = 50;

    w.open();
    w.open();  // Edge case: already open
    w.adjustTransparency(120); // Edge case: invalid level
    w.close();

    return 0;
}
