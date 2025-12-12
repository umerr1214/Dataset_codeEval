#include <iostream>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    // ROBUSTNESS ISSUE: No input validation for negative or zero values
    for (int i = 0; i < lines; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 0; k < (2 * lines - 2 * i - 1); k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}