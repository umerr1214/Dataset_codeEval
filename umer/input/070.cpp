#include <iostream>
#include <string>
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
    
    // Parameterized Constructor
    Student(string r, int a, float c) {
        rollNumber = r;
        age = a;
        cgpa = c;
        cout << "Overloaded/parameterized Constructor Called" << endl;
    }
    
    // Print function
    void print() {
        cout << rollNumber << "/" << age << "/" << cgpa << endl;
    }
    
    // getInput function - lacks input validation (robustness issue)
    void getInput() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter age: ";
        cin >> age;  // No validation for negative age or unrealistic values
        cout << "Enter CGPA: ";
        cin >> cgpa;  // No validation for CGPA range (should be 0.0-4.0)
    }
    
    // Setters - lack validation (robustness issue)
    void setRollNumber(string r) {
        rollNumber = r;  // No validation for empty string
    }
    
    void setAge(int a) {
        age = a;  // No validation for negative or unrealistic age
    }
    
    void setCgpa(float c) {
        cgpa = c;  // No validation for CGPA range
    }
    
    // Getters
    string getRollNumber() {
        return rollNumber;
    }
    
    int getAge() {
        return age;
    }
    
    float getCgpa() {
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
    
    delete std_3;
    return 0;
}