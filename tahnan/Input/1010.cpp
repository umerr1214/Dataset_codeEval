#include <iostream>
using namespace std;

class Person {
public:
    string name;
    virtual void displayInfo() = 0
};

class Student : public Person {
public:
    int rollNumber;
    void displayInfo() {
        cout << "Student Name: " << name << ", Roll No: " << rollNumber << endl;
    }
};

class Teacher : public Person {
public:
    string subject;
    void displayInfo() {
        cout << "Teacher Name: " << name << ", Subject: " << subject << endl;
    }
};

int main() {
    Person *p1 = new Student();
    Person *p2 = new Teacher();
    p1->name = "Alice";
    ((Student*)p1)->rollNumber = 101;
    p2->name = "Bob";
    ((Teacher*)p2)->subject = "Math";
    p1->displayInfo();
    p2->displayInfo();
    return 0
}
