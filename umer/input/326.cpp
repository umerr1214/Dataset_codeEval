#include <iostream>
using namespace std;

void calculateGrade(int marks, char &grade) {
    // LOGICAL ERROR: Wrong conditions - using >= instead of > and incorrect ranges
    if (marks >= 80) {
        grade = 'A';
    } else if (marks >= 65 && marks < 80) {
        grade = 'B';
    } else if (marks >= 50 && marks < 65) {
        grade = 'C';
    } else if (marks >= 0) {
        // LOGICAL ERROR: Should be 'F' but using 'D'
        grade = 'D';
    }
}

int main() {
    int marks;
    char grade;
    
    while (true) {
        cout << "Enter marks (0-100) or -1 to exit: ";
        cin >> marks;
        
        if (marks == -1) {
            break;
        }
        
        calculateGrade(marks, grade);
        cout << "Grade: " << grade << endl;
    }
    
    cout << "Program ended." << endl;
    return 0;
}