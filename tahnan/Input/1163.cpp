#include <iostream>
#include <fstream>
using namespace std;

class Employee {
    string name;
    int id;
public:
    void input() { cin >> id >> name; }
    void save() {
        ofstream f("emp.txt", ios::app);
        f << id << " " << name << endl;
        f.close();
    }
    void display() {
        ifstream f("emp.txt");
        string line;
        while(getline(f,line)) cout << line << endl;
        f.close();
    }
};

int main() {
    Employee e1, e2;
    e1.input(); e1.save();
    e2.input(); e2.save();
    e1.display();
    return 0;
}
