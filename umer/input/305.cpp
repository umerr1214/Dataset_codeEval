#include <iostream>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    if (lines <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
        return 1;
    }
    
    // READABILITY/EFFICIENCY ISSUES: Poor variable names, inefficient nested loops
    for (int x = 0; x < lines; x++) {
        // Inefficient: calculating spaces in loop instead of using string constructor
        for (int y = 0; y < x; y++) {
            cout << " ";
        }
        
        // Poor readability: complex formula without explanation
        int z = 2 * lines - 2 * x - 1;
        for (int w = 0; w < z; w++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}