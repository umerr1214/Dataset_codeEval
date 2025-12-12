#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Prompt user for input
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    int sum = 0;
    
    // Check if each value is unique and add to sum if so
    // A value is unique if it's different from both other values
    
    // Add a if it's unique (different from both b and c)
    if (a != b && a != c) {
        sum += a;
    }
    
    // Add b if it's unique (different from both a and c)
    if (b != a && b != c) {
        sum += b;
    }
    
    // Add c if it's unique (different from both a and b)
    if (c != a && c != b) {
        sum += c;
    }
    
    // Display the result
    cout << "Sum: " << sum << endl;
    
    return 0;
}