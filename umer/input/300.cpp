#include <iostream>
#include <string>
using namespace std;

int main() {
    int lines;
    
    // Prompt user for input
    cout << "Enter number of lines: ";
    cin >> lines;
    
    // Single loop to create triangle pattern
    for (int i = 0; i < lines; i++) {
        // Calculate number of spaces (decreases each row)
        int spaces = lines - i - 1;
        
        // Calculate number of stars (increases by 2 each row: 1, 3, 5, 7...)
        int stars = 2 * i + 1;
        
        // Print spaces using string constructor
        cout << string(spaces, ' ');
        
        // Print stars using string constructor
        cout << string(stars, '*');
        
        // Move to next line
        cout << endl;
    }
    
    return 0;
}