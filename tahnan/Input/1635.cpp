#include <iostream>
using namespace std;

class SmartWindow {
public:
    bool isOpen;
    int transparencyLevel

    void open() {
        isOpen = true
    }

    void close() {
        isOpen = false
    }

    void adjustTransparency(int level) {
        transparencyLevel = level
    }

    void displayStatus() {
        cout << "Window is " << (isOpen ? "Open" : "Closed") << endl
        cout << "Transparency: " << transparencyLevel << "%" << endl;
    }
};

int main() {
    SmartWindow w;
    w.isOpen = false;
    w.transparencyLevel = 50;

    w.open();
    w.adjustTransparency(70);
    w.displayStatus();

    return 0;
}
