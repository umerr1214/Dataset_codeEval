#include<iostream>
#include<string>
using namespace std;

class Logger {
private:
    static Logger* instance;
    Logger() {} // private constructor
public:
    static Logger* getInstance() {
        if(instance == nullptr)
            instance = new Logger();
        return instance;
    }
    void log(string msg) {
        cout << "Log: " << msg << endl;
    }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger* l1 = Logger::getInstance();
    Logger* l2 = Logger::getInstance();
    l1->log("Start Program");
    if(l1 == l2)
        cout << "Same instance\n";
    else
        cout << "Different instances\n";
    return 0;
}
