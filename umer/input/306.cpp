#include <iostream>
#include <string>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    // Input validation
    if (lines <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
        return 1;
    }
    
    // Print the pattern using a single loop with two cout statements
    for (int i = 0; i < lines; i++) {
        // Print leading spaces efficiently using string constructor
        cout << string(i, ' ');
        
        // Print stars - calculate number of stars for current row
        int numStars = 2 * lines - 2 * i - 1;
        cout << string(numStars, '*');
        
        cout << endl;
    }
    
    return 0;
}