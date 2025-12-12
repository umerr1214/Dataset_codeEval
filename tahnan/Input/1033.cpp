#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;
    void display() { cout << name << " " << rollNumber << " " << marks << endl; }
};

int main() {
    Student s;
    s.name = "Ali";
    s.rollNumber = 101;
    s.marks = 95;
    s.display();
    return 0;
}
