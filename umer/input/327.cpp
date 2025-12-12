#include <iostream>
using namespace std;

void calculateGrade(int marks, char &grade) {
    if (marks > 80) {
        grade = 'A';
    } else if (marks > 65) {
        grade = 'B';
    } else if (marks > 50) {
        grade = 'C';
    } else {
        grade = 'F';
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
        
        // SEMANTIC ERROR: Using undefined variable 'studentGrade' instead of 'grade'
        calculateGrade(marks, studentGrade);
        cout << "Grade: " << studentGrade << endl;
    }
    
    cout << "Program ended." << endl;
    return 0;
}