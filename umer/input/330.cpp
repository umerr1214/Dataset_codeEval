#include <iostream>
#include <limits>
using namespace std;

/**
 * Calculates the character grade based on marks out of 100
 * Grade criteria:
 * - More than 80: Grade A
 * - More than 65 but less than or equal to 80: Grade B
 * - More than 50 but less than or equal to 65: Grade C
 * - 50 or less: Grade F
 * 
 * @param marks The student's marks (should be between 0-100)
 * @param grade Reference to char variable where grade will be stored
 */
void calculateGrade(int marks, char &grade) {
    // Input validation
    if (marks < 0 || marks > 100) {
        grade = '?'; // Invalid grade indicator
        return;
    }
    
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

/**
 * Gets valid integer input from user with error handling
 * @param prompt Message to display to user
 * @return Valid integer value
 */
int getValidInput(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            return value;
        } else {
            cout << "Invalid input. Please enter a valid integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    int marks;
    char grade;
    
    cout << "=== Grade Calculator ===" << endl;
    cout << "Grading Criteria:" << endl;
    cout << "A: More than 80" << endl;
    cout << "B: More than 65 but <= 80" << endl;
    cout << "C: More than 50 but <= 65" << endl;
    cout << "F: 50 or less" << endl;
    cout << "=========================" << endl << endl;
    
    while (true) {
        marks = getValidInput("Enter marks (0-100) or -1 to exit: ");
        
        if (marks == -1) {
            break;
        }
        
        // Validate marks range
        if (marks < 0 || marks > 100) {
            cout << "Error: Marks must be between 0 and 100. Please try again." << endl;
            continue;
        }
        
        calculateGrade(marks, grade);
        
        if (grade == '?') {
            cout << "Error: Invalid marks provided." << endl;
        } else {
            cout << "Grade: " << grade << endl;
        }
        
        cout << endl; // Add spacing for better readability
    }
    
    cout << "Thank you for using the Grade Calculator!" << endl;
    return 0;
}