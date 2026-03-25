#include <iostream>
using namespace std;

class Student {
private:
    int size;
    int* marks;

public:
    // Default constructor
    Student() {
        marks = nullptr;
        size = 0;
    }
    
    // Parameterized constructor with deep copy and validation
    Student(int arr[], int s) {
        if (arr == nullptr || s <= 0) {
            marks = nullptr;
            size = 0;
            return;
        }
        
        size = s;
        marks = new int[size];
        for (int i = 0; i < size; i++) {
            marks[i] = arr[i];
        }
    }
    
    // Copy constructor for proper deep copy
    Student(const Student& other) {
        size = other.size;
        if (other.marks == nullptr || size <= 0) {
            marks = nullptr;
            size = 0;
        } else {
            marks = new int[size];
            for (int i = 0; i < size; i++) {
                marks[i] = other.marks[i];
            }
        }
    }
    
    // Assignment operator
    Student& operator=(const Student& other) {
        if (this != &other) {
            delete[] marks;
            
            size = other.size;
            if (other.marks == nullptr || size <= 0) {
                marks = nullptr;
                size = 0;
            } else {
                marks = new int[size];
                for (int i = 0; i < size; i++) {
                    marks[i] = other.marks[i];
                }
            }
        }
        return *this;
    }
    
    // Scale up function with proper validation
    void scaleUp() {
        if (marks == nullptr || size <= 0) {
            cout << "No marks to scale up." << endl;
            return;
        }
        
        for (int i = 0; i < size; i++) {
            if (marks[i] >= 45) {
                marks[i] += 5;
                if (marks[i] > 100) {
                    marks[i] = 100;
                }
            }
        }
    }
    
    // Print info function with proper validation
    void printInfo() const {
        if (marks == nullptr || size <= 0) {
            cout << "No marks to display." << endl;
            return;
        }
        
        cout << "Student marks: ";
        for (int i = 0; i < size; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    
    // Destructor
    ~Student() {
        delete[] marks;
        marks = nullptr;
        size = 0;
    }
};

int main() {
    // Static array with hardcoded values
    int studentMarks[] = {78, 85, 42, 67, 91, 55};
    int arraySize = 6;
    
    // Create object and pass array
    Student student(studentMarks, arraySize);
    
    // Print initial info
    cout << "Before scale up:" << endl;
    student.printInfo();
    
    // Apply scale up
    student.scaleUp();
    
    // Print after scale up
    cout << "After scale up:" << endl;
    student.printInfo();
    
    // Test with default constructor
    Student emptyStudent;
    cout << "\nTesting empty student:" << endl;
    emptyStudent.printInfo();
    emptyStudent.scaleUp();
    
    return 0;
}