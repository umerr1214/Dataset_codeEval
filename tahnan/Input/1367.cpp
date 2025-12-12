#include <iostream>
#include <vector>
using namespace std;

struct Time { int hour, minute; };

class EmployeeAttendance {
private:
    vector<Time> loginTimes;
    vector<Time> logoutTimes;

public:
    void login(Time t) { loginTimes.push_back(t); }
    void logout(Time t) { logoutTimes.push_back(t); }

    int totalHours() {
        // Robustness issue: no check if login/logout size mismatch
        int total = 0;
        for(int i=0;i<loginTimes.size();i++){
            total += (logoutTimes[i].hour - loginTimes[i].hour);
        }
        return total;
    }
};

int main() {
    EmployeeAttendance ea;
    ea.login({9,0});
    ea.logout({17,30});
    ea.logout({18,0}); // extra logout to test robustness
    cout << "Total hours: " << ea.totalHours() << endl;
    return 0;
}
