#include <iostream>
#include <string>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    for (int i = 0; i < lines; i++) {
        int spaces = lines + i - 1; // Logical error: should be lines - i - 1
        int stars = 2 * i + 1;
        
        cout << string(spaces, ' ');
        cout << string(stars, '*');
        cout << endl;
    }
    
    return 0;
}