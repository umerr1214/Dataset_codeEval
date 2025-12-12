#include <iostream>
using namespace std;

class Logger {
private:
    static Logger* instance
    Logger() {}
public:
    static Logger* getInstance() {
        if(instance == nullptr)
            instance = new Logger
        return instance;
    }
    void log(string msg) { cout << msg << endl; }
};

int main() {
    Logger* log1 = Logger::getInstance();
    Logger* log2 = Logger::getInstance();
    log1->log("Test message");
    return 0;
}
