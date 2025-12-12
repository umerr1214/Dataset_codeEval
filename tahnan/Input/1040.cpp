#include <iostream>
using namespace std;

class Person {
public:
    virtual void displayInfo() { cout << "Person info" << endl; }
};

class Student : public Person {
public:
    void displayInfo() { cout << "Student info" << endl; }
};

class Teacher : public Person {
public:
    void displayInfo() { cout << "Teacher info" << endl; }
};

int main() {
    Person* p1 = new Student();
    Person* p2 = new Teacher();
    p1->displayInfo();
    p2->displayInfo();
    return 0;
}
