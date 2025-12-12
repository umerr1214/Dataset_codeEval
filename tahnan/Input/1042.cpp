#include <iostream>
using namespace std;

class Logger {
    static Logger* instance;
    Logger() {}
public:
    static Logger* getInstance() {
        if(instance == nullptr) instance = new Logger();
        return instance;
    }
    void log(string msg) { cout << msg << endl; }
};
Logger* Logger::instance = nullptr;

int main() {
    Logger* l = Logger::getInstance();
    l->log("Hello Logger");
    return 0;
}
