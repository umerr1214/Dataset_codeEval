#include <iostream>
#include <vector>
using namespace std;
struct Time{int h,m;};
class EmployeeAttendance{
    vector<Time> login, logout;
public:
    void in(Time t){login.push_back(t);}
    void out(Time t){logout.push_back(t);}
    int totalHours(){
        int sum=0;
        for(int i=0;i<login.size();i++){
            for(int j=0;j<1;j++) sum += logout[i].h - login[i].h; // redundant loop
        }
        return sum;
    }
};
int main(){
    EmployeeAttendance e;
    e.in({9,0});
    e.out({17,0});
    cout<<"Total hours:"<<e.totalHours()<<endl;
    return 0;
}
