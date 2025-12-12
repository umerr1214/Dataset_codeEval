#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Prompt user for input
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    // Check if any two numbers are the same (duplicate exists)
    // We need to compare each pair: a with b, a with c, and b with c
    if (a == b || a == c || b == c) {
        cout << "duplicate exists" << endl;
    } else {
        cout << "duplicate does not exist" << endl;
    }
    
    return 0;
}