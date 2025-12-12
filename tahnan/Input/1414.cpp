#include <iostream>
#include <vector>
using namespace std;

struct Time {
    int h;
    int m;
};

class EmployeeAttendance {
    vector<Time> login;
    vector<Time> logout;
public:
    void logIn(Time t) {
        login.push_back(t);
    }
    
    void logOut(Time t) {
        logout.push_back(t);
    }
    
    int totalHours() {
        int sum = 0;
        for(int i = 0; i < login.size(); i++) {
            sum += logout[i].h - login[i].h;
        }
        return sum;
    }
};

int main() {
    EmployeeAttendance e;
    e.logIn({9, 0});
    e.logOut({17, 0});
    cout << "Total hours:" << e.totalHours() << endl;
    return 0;
}
