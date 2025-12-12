#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber
    int marks;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Marks: " << marks << endl
    }
};

int main() {
    Student s;
    s.name = "Alice";
    s.rollNumber = 101;
    s.marks = 88;
    s.display();
    return 0;
}
