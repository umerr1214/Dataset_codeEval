#include <iostream>
using namespace std;

class Student {
private:
    int size;
    int* marks;

public:
    // Default constructor
    Student() {
        marks = NULL;
        size = 0;
    }
    
    // Parameterized constructor with deep copy - lacks validation (robustness issue)
    Student(int arr[], int s) {
        size = s;  // No validation for negative size
        marks = new int[size];  // Could fail if size is negative or too large
        for (int i = 0; i < size; i++) {
            marks[i] = arr[i];  // No validation for null array pointer
        }
    }
    
    // Scale up function - lacks null pointer check (robustness issue)
    void scaleUp() {
        for (int i = 0; i < size; i++) {  // No check if marks is null
            if (marks[i] >= 45) {
                marks[i] += 5;
                if (marks[i] > 100) {
                    marks[i] = 100;
                }
            }
        }
    }
    
    // Print info function - lacks null pointer check (robustness issue)
    void printInfo() {
        cout << "Student marks: ";
        for (int i = 0; i < size; i++) {  // No check if marks is null
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    
    // Destructor
    ~Student() {
        delete[] marks;
        marks = nullptr;
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
    
    return 0;
}