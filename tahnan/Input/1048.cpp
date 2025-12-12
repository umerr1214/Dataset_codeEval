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
    cin >> s.name >> s.rollNumber >> s.marks;
    if(s.marks<0 || s.marks>100) cout << "Invalid marks\n";
    else s.display();
    return 0;
}
