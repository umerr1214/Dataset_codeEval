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
    
    // Parameterized constructor - inefficient string passing by value
    Student(string r, string n, string c, string d, string a) {  // Should use const string&
        rollNo = r;
        name = n;
        cnic = c;
        degree = d;
        address = a;
    }
    
    // Getters - inefficient string return by value
    string getRollNo() {  // Should return const string&
        return rollNo;
    }
    
    string getName() {  // Should return const string&
        return name;
    }
    
    string getCnic() {  // Should return const string&
        return cnic;
    }
    
    string getDegree() {  // Should return const string&
        return degree;
    }
    
    string getAddress() {  // Should return const string&
        return address;
    }
    
    // Setters - inefficient string passing by value
    void setRollNo(string r) {  // Should use const string&
        rollNo = r;
    }
    
    void setName(string n) {  // Should use const string&
        name = n;
    }
    
    void setCnic(string c) {  // Should use const string&
        cnic = c;
    }
    
    void setDegree(string d) {  // Should use const string&
        degree = d;
    }
    
    void setAddress(string a) {  // Should use const string&
        address = a;
    }
    
    // getInput function - poor readability
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
    
    // Print function - poor readability and inefficient
    void print() {
        // Inefficient: multiple function calls instead of direct access
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Name: " << getName() << endl;
        cout << "CNIC: " << getCnic() << endl;
        cout << "Degree: " << getDegree() << endl;
        cout << "Address: " << getAddress() << endl;
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
    
    // Test getters - inefficient multiple calls
    cout << "Testing getters for student 2:" << endl;
    cout << "Roll No: " << stdArr[2].getRollNo() << endl;
    cout << "Name: " << stdArr[2].getName() << endl;
    cout << "CNIC: " << stdArr[2].getCnic() << endl;
    cout << "Degree: " << stdArr[2].getDegree() << endl;
    cout << "Address: " << stdArr[2].getAddress() << endl;
    
    // Test getInput function
    cout << "Testing getInput function for student 1:" << endl;
    stdArr[0].getInput();
    stdArr[0].print();
    
    return 0;
}