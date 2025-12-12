#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    void setName(string n) 
    {
        name = n;
    }

    string getName() 
    {
        return name;
    }

    void setSalary(double s) 
    {
        salary = s;
    }

    double getSalary() 
    {
        return salary;
    }

    void display() 
    {
        cout << "Employee: " << name << ", Salary: " << salary << endl;
    }
};

int main() 
{
    string n;
    double s;
    cin >> n >> s;

    Employee e;
    e.setName(n);
    e.setSalary(s);
    e.display();

    return 0;
}
