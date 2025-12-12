#include <iostream>
#include <climits>
using namespace std;

int sumNumbers(int num1, int num2) {
    if (num1 > 0 && num2 > INT_MAX - num1) {
        cout << "Error: Integer overflow detected!" << endl;
        return INT_MAX;
    }
    if (num1 < 0 && num2 < INT_MIN - num1) {
        cout << "Error: Integer underflow detected!" << endl;
        return INT_MIN;
    }
    return num1 + num2;
}

int sumNumbers(int num1, int num2, int num3) {
    // Check for overflow in multiple steps
    int temp = sumNumbers(num1, num2);
    if (temp == INT_MAX || temp == INT_MIN) {
        return temp; // Already overflowed
    }
    return sumNumbers(temp, num3);
}

int main() {
    int a, b, c;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    int result2 = sumNumbers(a, b);
    if (result2 == INT_MAX || result2 == INT_MIN) {
        cout << "Error in two-parameter sum." << endl;
    } else {
        cout << "Sum of two: " << result2 << endl;
    }
    
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    int result3 = sumNumbers(a, b, c);
    if (result3 == INT_MAX || result3 == INT_MIN) {
        cout << "Error in three-parameter sum." << endl;
    } else {
        cout << "Sum of three: " << result3 << endl;
    }
    
    return 0;
}