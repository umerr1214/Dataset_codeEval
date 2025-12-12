#include <iostream>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    for (int i = 0; i < lines; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Print stars - LOGICAL ERROR: wrong formula
        for (int k = 0; k < (lines - i); k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}