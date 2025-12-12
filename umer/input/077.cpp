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
    
    // Parameterized constructor with deep copy
    Student(int arr[], int s) {
        size = s;
        marks = new int[size];
        for (int i = 0; i < size; i++) {
            marks[i] = arr[i];
        }
    }
    
    // Scale up function - inefficient implementation (readability/efficiency issue)
    void scaleUp() {
        // Inefficient: multiple loops instead of single loop
        for (int i = 0; i < size; i++) {
            if (marks[i] >= 45) {
                marks[i] += 5;
            }
        }
        // Separate loop for capping at 100 - inefficient
        for (int i = 0; i < size; i++) {
            if (marks[i] > 100) {
                marks[i] = 100;
            }
        }
    }
    
    // Print info function - poor readability
    void printInfo() {
        cout << "Student marks: ";
        int i = 0;  // Poor style: declaring variable in middle of function
        while (i < size) {  // Using while loop instead of more readable for loop
            cout << marks[i] << " ";
            i++;
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