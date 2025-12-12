#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks;

public:
    Student(string n, int r, int m) { name = n; rollNumber = r; marks = m; }

    void display() {
        // Semantic error: prints variables incorrectly (misuses encapsulation)
        cout << "Name: " << rollNumber << ", Roll: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s("Ali", 101, 95);
    s.display();
    return 0;
}
