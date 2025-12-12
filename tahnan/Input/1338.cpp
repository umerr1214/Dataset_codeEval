#include <iostream>
#include <vector>
using namespace std;

struct Time {
    int hour, minute;
};

class EmployeeAttendance {
private:
    vector<Time> loginTimes;
    vector<Time> logoutTimes;

public:
    void login(Time t) { loginTimes.push_back(t); }
    void logout(Time t) { logoutTimes.push_back(t); }

    void totalHours() {
        for(int i=0;i<loginTimes.size();i++){
            int h = logoutTimes[i].hour - loginTimes[i].hour;
            int m = logoutTimes[i].minute - loginTimes[i].minute;
            if(m < 0) { m = 60 - m; h--; } // Logical error: calculation is incorrect
            cout << "Session " << i+1 << ": " << h << "h " << m << "m\n";
        }
    }
};

int main() {
    EmployeeAttendance ea;
    ea.login({9,0});
    ea.logout({17,30});
    ea.totalHours();
    return 0;
}
