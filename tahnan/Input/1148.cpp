#include <iostream>
#include <fstream>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    void input() { cin >> name >> salary; }
    void save() {
        ofstream fout("emp.txt");
        fout << name; // Semantic error: salary not saved
        fout.close();
    }
};

int main() {
    Employee e;
    e.input();
    e.save();
    cout << "Saved\n";
    return 0;
}
