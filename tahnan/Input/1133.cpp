#include <iostream>
#include <fstream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
public:
    void input() {
        cin >> name >> salary;
    }
    void writeToFile() {
        ofstream fout("employee.txt");
        fout << name << endl; // Logical error: forgot salary
        fout.close();
    }
    void readFromFile() {
        ifstream fin("employee.txt");
        string n; double s;
        fin >> n >> s;
        cout << n << " " << s << endl;
        fin.close();
    }
};

int main() {
    Employee e;
    e.input();
    e.writeToFile();
    e.readFromFile();
    return 0;
}
