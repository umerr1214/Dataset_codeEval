#include <iostream>
using namespace std;

class Logger {
    static Logger* instance;
    Logger() {}
public:
    static Logger* getInstance() {
        if(!instance) instance = new Logger();
        return instance;
    }
    void log(string msg) { cout << msg << endl; }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger* l1 = Logger::getInstance();
    Logger* l2 = Logger::getInstance();
    if(l1==l2) cout << "Single instance\n";
    else cout << "Multiple instances\n";
    l1->log("Test message");
    return 0;
}
