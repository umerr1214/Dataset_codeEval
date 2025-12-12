#include <iostream>
using namespace std;

class Time {
public:
    int h, m, s;
    Time(int hh=0, int mm=0, int ss=0) { h=hh; m=mm; s=ss; }
    void display() { cout << h << ":" << m << ":" << s << endl; }
};

int main() {
    int hh, mm, ss;
    cin >> hh >> mm >> ss;
    if(hh<0 || mm<0 || mm>=60 || ss<0 || ss>=60) cout << "Invalid time\n";
    else {
        Time t(hh,mm,ss);
        t.display();
    }
    return 0;
}
