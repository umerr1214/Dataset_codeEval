#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string rollNo;
    string name;
    string cnic;
    string degree;
    string address;

public:
    // Default constructor
    Student() {
        rollNo = "";
        name = "";
        cnic = "";
        degree = "";
        address = "";
    }
    
    // Parameterized constructor
    Student(string r, string n, string c, string d, string a) {
        rollNo = r;
        name = n;
        cnic = c;
        degree = d;
        address = a;
    }
    
    // Getters
    string getRollNo() {
        return rollNo;
    }
    
    string getName() {
        return name;
    }
    
    string getCnic() {
        return cnic;
    }
    
    string getDegree() {
        return degree;
    }
    
    string getAddress() {
        return address;
    }
    
    // Setters
    void setRollNo(string r) {
        rollNo = r;
    }
    
    void setName(string n) {
        name = n;
    }
    
    void setCnic(string c) {
        cnic = c;
    }
    
    void setDegree(string d) {
        degree = d;
    }
    
    void setAddress(string a) {
        address = a;
    }
    
    // getInput function
    void getInput() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter CNIC: ";
        cin >> cnic;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Address: ";
        cin >> address;
    }
    
    // Print function
    void print() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Degree: " << degree << endl;
        cout << "Address: " << address << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Create static array of Student objects
    Student stdArr[3];
    
    // Test default constructor
    cout << "Testing default constructor:" << endl;
    stdArr[0].print();
    
    // Test parameterized constructor
    stdArr[1] = Student("21L-1234", "John", "12345-6789012-3", "BSCS", "Lahore");
    cout << "Testing parameterized constructor:" << endl;
    stdArr[1].print();
    
    // Test setters
    stdArr[2].setRollNo("21L-5678");
    stdArr[2].setName("Alice");
    stdArr[2].setCnic("98765-4321098-7");
    stdArr[2].setDegree("BSEE");
    stdArr[2].setAddress("Karachi");
    
    cout << "Testing setters:" << endl;
    stdArr[2].print();
    
    // Test getters
    cout << "Testing getters for student 2:" << endl;
    cout << "Roll No: " << stdArr[2].getRollNo() << endl;
    cout << "Name: " << stdArr[2].getName() << endl;
    
    // Semantic error: trying to access private member directly
    cout << "Direct access to private member: " << stdArr[1].rollNo << endl;
    
    // Test getInput function
    cout << "Testing getInput function for student 1:" << endl;
    stdArr[0].getInput();
    stdArr[0].print();
    
    return 0;
}