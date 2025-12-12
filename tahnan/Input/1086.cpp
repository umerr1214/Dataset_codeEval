#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
public:
    void setName(string n) { name = n; }
    void setSalary(double s) { salary = s; }
    string getName() { return name; }
    double getSalary() { return salary; }
};

int main() {
    string n; double s;
    cin >> n >> s;
    Employee e;
    e.setName(n);
    e.setSalary(s);
    cout << e.getName() << " " << e.getSalary() << endl;
    return 0;
}
