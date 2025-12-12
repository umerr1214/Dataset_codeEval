#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    int marks;
    void display() { cout << "Name: " << name << ", Roll: " << rollNumber << ", Marks: " << marks+5 << endl; } // logical error: adds 5 marks
};

int main() {
    Student s;
    s.name = "Ali";
    s.rollNumber = 101;
    s.marks = 80;
    s.display();
    return 0;
}
