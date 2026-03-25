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
    
    // Parameterized constructor - lacks validation (robustness issue)
    Student(string r, string n, string c, string d, string a) {
        rollNo = r;  // No validation for empty strings
        name = n;
        cnic = c;    // No validation for CNIC format
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
    
    // Setters - lack validation (robustness issue)
    void setRollNo(string r) {
        rollNo = r;  // No validation for empty or invalid format
    }
    
    void setName(string n) {
        name = n;  // No validation for empty name
    }
    
    void setCnic(string c) {
        cnic = c;  // No validation for CNIC format
    }
    
    void setDegree(string d) {
        degree = d;  // No validation for empty degree
    }
    
    void setAddress(string a) {
        address = a;  // No validation for empty address
    }
    
    // getInput function - lacks input validation (robustness issue)
    void getInput() {
        cout << "Enter Roll No: ";
        cin >> rollNo;  // No validation for format
        cout << "Enter Name: ";
        cin >> name;    // No validation for empty input
        cout << "Enter CNIC: ";
        cin >> cnic;    // No validation for CNIC format
        cout << "Enter Degree: ";
        cin >> degree;  // No validation
        cout << "Enter Address: ";
        cin >> address; // No validation
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
    
    // Test getInput function
    cout << "Testing getInput function for student 1:" << endl;
    stdArr[0].getInput();
    stdArr[0].print();
    
    return 0;
}