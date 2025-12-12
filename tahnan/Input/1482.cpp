#include <iostream>
#include <string>
using namespace std;
class SmartLock{bool l;string p;public:SmartLock(string c){p=c;l=1;}void lock(){l=1;}void unlock(string c){if(c==p)l=0;}void change(string c){p=c;}void status(){cout<<(l?"Locked":"Unlocked")<<"\n";}};int main(){SmartLock s("1234");s.lock();s.unlock("1234");s.status();return 0;}
