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
    if (c != a || c != b) { // Logical error: should be AND, not OR
        sum += c;
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}