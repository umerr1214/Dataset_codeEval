#include <iostream>
using namespace std;

class SmartWindow {
protected: // Semantic misuse: should be private or public
    bool isOpen;
    int transparencyLevel;

public:
    void open() {
        isOpen = true;
    }

    void close() {
        isOpen = false;
    }

    void adjustTransparency(int level) {
        transparencyLevel = level;
    }

    void displayStatus() {
        cout << "Window is " << (isOpen ? "Open" : "Closed") << endl;
        cout << "Transparency: " << transparencyLevel << "%" << endl;
    }
};

int main() {
    SmartWindow w;
    w.isOpen = false; // Semantic error: protected member accessed
    w.transparencyLevel = 50;

    w.open();
    w.adjustTransparency(70);
    w.displayStatus();

    return 0;
}
