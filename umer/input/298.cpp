#include <iostream>
#include <string>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    for (int i = 0; i < lines; i++) {
        int spaces = lines - i - 1;
        int stars = 2 * i + 1;
        
        cout << string(spaces, ' ');
        cout << string(stars, '*');
        cout << endl;
    }
    
    // Robustness issues:
    // - No input validation (what if user enters negative numbers?)
    // - No handling of zero or very large numbers
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    // - Could cause performance issues with very large inputs
    
    return 0;
}