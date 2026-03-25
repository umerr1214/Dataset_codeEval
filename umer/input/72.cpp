#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Student {
private:
    string rollNumber;
    int age;
    float cgpa;

public:
    // Default Constructor
    Student() {
        rollNumber = "21L-1234";
        age = 25;
        cgpa = 3.24;
        cout << "Default Constructor Called" << endl;
    }
    
    // Parameterized Constructor with efficient parameter passing
    Student(const string& r, int a, float c) {
        setRollNumber(r);
        setAge(a);
        setCgpa(c);
        cout << "Overloaded/parameterized Constructor Called" << endl;
    }
    
    // Print function
    void print() const {
        cout << rollNumber << "/" << age << "/" << cgpa << endl;
    }
    
    // getInput function with input validation
    void getInput() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        
        cout << "Enter age: ";
        while (!(cin >> age) || age < 0 || age > 150) {
            cout << "Invalid age. Please enter a valid age (0-150): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "Enter CGPA: ";
        while (!(cin >> cgpa) || cgpa < 0.0 || cgpa > 4.0) {
            cout << "Invalid CGPA. Please enter a valid CGPA (0.0-4.0): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    
    // Setters with validation
    void setRollNumber(const string& r) {
        if (!r.empty()) {
            rollNumber = r;
        } else {
            cout << "Warning: Roll number cannot be empty. Using default." << endl;
            rollNumber = "21L-0000";
        }
    }
    
    void setAge(int a) {
        if (a >= 0 && a <= 150) {
            age = a;
        } else {
            cout << "Warning: Invalid age. Using default value 20." << endl;
            age = 20;
        }
    }
    
    void setCgpa(float c) {
        if (c >= 0.0 && c <= 4.0) {
            cgpa = c;
        } else {
            cout << "Warning: Invalid CGPA. Using default value 2.0." << endl;
            cgpa = 2.0;
        }
    }
    
    // Getters with efficient return types
    const string& getRollNumber() const {
        return rollNumber;
    }
    
    int getAge() const {
        return age;
    }
    
    float getCgpa() const {
        return cgpa;
    }
};

int main() {
    // Exercise 2: Default Constructor
    Student std_1;
    std_1.print();
    
    // Exercise 3: Parameterized Constructor
    Student std_2("21L-5678", 19, 3.46);
    std_2.print();
    
    // Exercise 4: getInput function
    std_1.getInput();
    std_1.print();
    
    // Exercise 5: Dynamic object with setters/getters
    Student* std_3 = new Student();
    std_3->setRollNumber("21L-9999");
    std_3->setAge(22);
    std_3->setCgpa(3.85);
    
    cout << "Student 3 data:" << endl;
    cout << "Roll Number: " << std_3->getRollNumber() << endl;
    cout << "Age: " << std_3->getAge() << endl;
    cout << "CGPA: " << std_3->getCgpa() << endl;
    
    // Proper memory cleanup
    delete std_3;
    std_3 = nullptr;
    
    return 0;
}