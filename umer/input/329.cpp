#include <iostream>
using namespace std;

// READABILITY ISSUE: Poor function name and no comments
void func(int x, char &y) {
    // READABILITY ISSUE: Poor variable names and unclear logic
    if (x > 80) {
        y = 'A';
    } else if (x > 65) {
        y = 'B';
    } else if (x > 50) {
        y = 'C';
    } else {
        y = 'F';
    }
}

int main() {
    // READABILITY ISSUE: Poor variable names
    int m;
    char g;
    
    while (true) {
        cout << "Enter marks (0-100) or -1 to exit: ";
        cin >> m;
        
        if (m == -1) {
            break;
        }
        
        // EFFICIENCY ISSUE: Could validate input here but doesn't
        if (m < 0 || m > 100) {
            cout << "Invalid marks! Please enter marks between 0-100." << endl;
            continue;
        }
        
        func(m, g);
        cout << "Grade: " << g << endl;
    }
    
    cout << "Program ended." << endl;
    return 0;
}