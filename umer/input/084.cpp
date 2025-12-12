#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Student {
private:
    string rollNo;
    string name;
    string cnic;
    string degree;
    string address;

    // Helper function to validate CNIC format
    bool isValidCnic(const string& cnic) const {
        regex cnicPattern("^[0-9]{5}-[0-9]{7}-[0-9]$");
        return regex_match(cnic, cnicPattern);
    }

    // Helper function to validate roll number format
    bool isValidRollNo(const string& rollNo) const {
        regex rollPattern("^[0-9]{2}[A-Z]-[0-9]{4}$");
        return regex_match(rollNo, rollPattern);
    }

public:
    // Default constructor
    Student() {
        rollNo = "";
        name = "";
        cnic = "";
        degree = "";
        address = "";
    }
    
    // Parameterized constructor with validation
    Student(const string& r, const string& n, const string& c, const string& d, const string& a) {
        setRollNo(r);
        setName(n);
        setCnic(c);
        setDegree(d);
        setAddress(a);
    }
    
    // Copy constructor
    Student(const Student& other) {
        rollNo = other.rollNo;
        name = other.name;
        cnic = other.cnic;
        degree = other.degree;
        address = other.address;
    }
    
    // Assignment operator
    Student& operator=(const Student& other) {
        if (this != &other) {
            rollNo = other.rollNo;
            name = other.name;
            cnic = other.cnic;
            degree = other.degree;
            address = other.address;
        }
        return *this;
    }
    
    // Getters with const correctness
    const string& getRollNo() const {
        return rollNo;
    }
    
    const string& getName() const {
        return name;
    }
    
    const string& getCnic() const {
        return cnic;
    }
    
    const string& getDegree() const {
        return degree;
    }
    
    const string& getAddress() const {
        return address;
    }
    
    // Setters with validation
    void setRollNo(const string& r) {
        if (r.empty()) {
            cout << "Warning: Roll number cannot be empty. Using default." << endl;
            rollNo = "00X-0000";
        } else if (!isValidRollNo(r)) {
            cout << "Warning: Invalid roll number format. Expected format: 21L-1234" << endl;
            rollNo = r; // Still set it but warn user
        } else {
            rollNo = r;
        }
    }
    
    void setName(const string& n) {
        if (n.empty()) {
            cout << "Warning: Name cannot be empty. Using default." << endl;
            name = "Unknown";
        } else {
            name = n;
        }
    }
    
    void setCnic(const string& c) {
        if (c.empty()) {
            cout << "Warning: CNIC cannot be empty. Using default." << endl;
            cnic = "00000-0000000-0";
        } else if (!isValidCnic(c)) {
            cout << "Warning: Invalid CNIC format. Expected format: 12345-6789012-3" << endl;
            cnic = c; // Still set it but warn user
        } else {
            cnic = c;
        }
    }
    
    void setDegree(const string& d) {
        if (d.empty()) {
            cout << "Warning: Degree cannot be empty. Using default." << endl;
            degree = "Unknown";
        } else {
            degree = d;
        }
    }
    
    void setAddress(const string& a) {
        if (a.empty()) {
            cout << "Warning: Address cannot be empty. Using default." << endl;
            address = "Unknown";
        } else {
            address = a;
        }
    }
    
    // getInput function with validation
    void getInput() {
        string input;
        
        cout << "Enter Roll No (format: 21L-1234): ";
        cin >> input;
        setRollNo(input);
        
        cout << "Enter Name: ";
        cin >> input;
        setName(input);
        
        cout << "Enter CNIC (format: 12345-6789012-3): ";
        cin >> input;
        setCnic(input);
        
        cout << "Enter Degree: ";
        cin >> input;
        setDegree(input);
        
        cout << "Enter Address: ";
        cin >> input;
        setAddress(input);
    }
    
    // Print function with const correctness
    void print() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Degree: " << degree << endl;
        cout << "Address: " << address << endl;
        cout << "------------------------" << endl;
    }
    
    // Utility function to check if student data is valid
    bool isValid() const {
        return !rollNo.empty() && !name.empty() && !cnic.empty() && 
               !degree.empty() && !address.empty();
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
    
    // Test setters with validation
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
    cout << "Valid: " << (stdArr[2].isValid() ? "Yes" : "No") << endl;
    
    // Test getInput function
    cout << "Testing getInput function for student 1:" << endl;
    stdArr[0].getInput();
    stdArr[0].print();
    
    // Test copy constructor
    Student copyStudent = stdArr[1];
    cout << "Testing copy constructor:" << endl;
    copyStudent.print();
    
    return 0;
}