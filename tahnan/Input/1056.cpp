#include <iostream>
using namespace std;

class Employee {
private:
    double salary;
public:
    void setSalary(double s) { if(s>=0) salary=s; else cout<<"Invalid salary\n"; }
    double getSalary() { return salary; }
};

int main() {
    Employee e;
    double s;
    cin >> s;
    e.setSalary(s);
    cout << "Salary: " << e.getSalary() << endl;
    return 0;
}
