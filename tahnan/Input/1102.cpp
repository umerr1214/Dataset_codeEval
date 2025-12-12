#include <iostream>
#include <string>
using namespace std;

class Logger {
private:
    static Logger* instance;
    Logger() {}

public:
    static Logger* getInstance() 
    {
        if (instance == nullptr) 
        {
            instance = new Logger();
        }
        return instance;
    }

    void logMessage(const string &msg) 
    {
        cout << "Log: " << msg << endl;
    }
};

Logger* Logger::instance = nullptr;

int main() 
{
    Logger* log1 = Logger::getInstance();
    Logger* log2 = Logger::getInstance();

    log1->logMessage("Starting application");
    log2->logMessage("Application running");

    return 0;
}
