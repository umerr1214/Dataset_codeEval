#include <iostream>
#include <climits>
using namespace std;

int findMax(int num1, int num2) {
    // Handle edge cases for integer limits
    if (num1 == INT_MAX || num2 == INT_MAX) {
        return INT_MAX;
    }
    if (num1 == INT_MIN && num2 == INT_MIN) {
        return INT_MIN;
    }
    
    // Standard comparison
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    int result = findMax(a, b);
    cout << "Maximum: " << result << endl;
    
    // Additional information for edge cases
    if (result == INT_MAX) {
        cout << "Note: Maximum integer value reached." << endl;
    }
    if (result == INT_MIN) {
        cout << "Note: Both values are minimum integer." << endl;
    }
    
    return 0;
}