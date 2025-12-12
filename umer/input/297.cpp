#include <iostream>
#include <string>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;
    
    for (int i = 0; i < lines; i++) {
        string spaces = lines - i - 1; // Semantic error: should be int, not string
        int stars = 2 * i + 1;
        
        cout << string(spaces, ' '); // Type mismatch: using string as int parameter
        cout << string(stars, '*');
        cout << endl;
    }
    
    return 0;
}