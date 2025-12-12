#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    virtual void displayInfo() = 0;
};

class Student : public Person {
public:
    int roll;
    void displayInfo() { cout << "Student: " << name << " " << roll << endl; }
};

class Teacher : public Person {
public:
    string subject;
    void displayInfo() { cout << "Teacher: " << name << " " << subject << endl; }
};

int main() {
    int choice;
    cin >> choice;
    Person* p;
    if(choice==1) {
        Student* s = new Student();
        cin >> s->name >> s->roll;
        if(s->roll<0) { cout<<"Invalid roll\n"; return 0; }
        p = s;
    } else if(choice==2) {
        Teacher* t = new Teacher();
        cin >> t->name >> t->subject;
        p = t;
    } else {
        cout << "Invalid choice\n"; return 0;
    }
    p->displayInfo();
    return 0;
}
