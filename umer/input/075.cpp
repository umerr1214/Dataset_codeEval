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
    
    // Scale up function
    void scaleUp() {
        for (int i = 0; i < size; i++) {
            if (marks[i] >= 45) {
                marks[i] += 5;
                if (marks[i] > 100) {
                    marks[i] = 100;
                }
            }
        }
    }
    
    // Print info function
    void printInfo() {
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
    
    // Semantic error: trying to access private member directly
    cout << "Direct access to size: " << student.size << endl;
    
    return 0;
}