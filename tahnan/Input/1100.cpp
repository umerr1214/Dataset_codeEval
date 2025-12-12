#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    virtual void displayInfo() = 0;
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string n, int r) 
    {
        name = n;
        rollNumber = r;
    }

    void displayInfo() 
    {
        cout << "Student: " << name << ", Roll: " << rollNumber << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, string s) 
    {
        name = n;
        subject = s;
    }

    void displayInfo() 
    {
        cout << "Teacher: " << name << ", Subject: " << subject << endl;
    }
};

int main() 
{
    int type;
    cin >> type;

    if (type == 1) 
    {
        string n;
        int r;
        cin >> n >> r;
        Student s(n, r);
        s.displayInfo();
    } 
    else 
    {
        string n, sub;
        cin >> n >> sub;
        Teacher t(n, sub);
        t.displayInfo();
    }

    return 0;
}
