#include <iostream>
using namespace std;

class Employee {
private:
    string name
    double salary;
public:
    void setName(string n) { name = n; }
    string getName() { return name }
    void setSalary(double s) { salary = s; }
    double getSalary() { return salary }
};

int main() {
    Employee e;
    e.setName("Alice");
    e.setSalary(5000);
    cout << "Name: " << e.getName() << ", Salary: " << e.getSalary() << endl;
    return 0;
}
