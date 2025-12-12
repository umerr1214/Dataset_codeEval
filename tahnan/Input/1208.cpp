#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    void input() {
        cin >> name >> id;
    }

    void saveToFile() {
        ofstream fout("employee.txt");
        fout << name << " " << id << endl;
        fout.close();
    }

    void readFromFile() {
        ifstream fin("employee.txt");
        fin >> name >> id;
        fin.close();
    }

    void display() {
        cout << name << " " << id << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.saveToFile();
    Employee e2;
    e2.readFromFile();
    e2.display();
    return 0;
}
