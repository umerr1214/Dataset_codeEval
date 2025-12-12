#include <iostream>
#include <climits>
using namespace std;

int sumNumbers(int num1, int num2) {
    // Check for overflow before performing addition
    if (num1 > 0 && num2 > INT_MAX - num1) {
        cout << "Error: Integer overflow detected!" << endl;
        return INT_MAX; // Return maximum value to indicate overflow
    }
    if (num1 < 0 && num2 < INT_MIN - num1) {
        cout << "Error: Integer underflow detected!" << endl;
        return INT_MIN; // Return minimum value to indicate underflow
    }
    return num1 + num2;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    int result = sumNumbers(a, b);
    cout << "Sum: " << result << endl;
    
    return 0;
}