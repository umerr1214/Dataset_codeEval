#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    int sum = 0;
    
    // Add a if it's unique
    if (a != b && a != c) {
        sum += a;
    }
    
    // Add b if it's unique
    if (b != a && b != c) {
        sum += b;
    }
    
    // Add c if it's unique
    if (c != a && c != b) {
        sum += c;
    }
    
    cout << "Sum: " << sum << endl  // Missing semicolon - syntax error
    
    return 0;
}