#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    // Check for duplicates
    if (a == b || a == c || b == c) {
        string result = true; // Semantic error: assigning bool to string
        cout << "duplicate exists" << endl;
    } else {
        cout << "duplicate does not exist" << endl;
    }
    
    return 0;
}