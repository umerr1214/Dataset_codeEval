#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double marks;

public:
    void setDetails(string n, int r, double m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << rollNumber << ", Marks: " << marks << endl;
    }
};

int main() {
    string n;
    int r;
    double m;
    cin >> n >> r >> m;
    Student s;
    s.setDetails(n, r, m);
    s.display();
    return 0;
}
