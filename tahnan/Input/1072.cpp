#include<iostream>
using namespace std;class Logger{private:static Logger* instance;Logger(){}public:static Logger* getInstance(){if(!instance)instance=new Logger();return instance;}void log(string msg){cout<<msg<<endl;}};Logger* Logger::instance=nullptr;int main(){Logger* l=Logger::getInstance();l->log(\"Hello\");return 0;}
