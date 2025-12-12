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
    int result = 0;
    for (int i = 0; i < num1; i++) {
        result++;
    }
    for (int j = 0; j < num2; j++) {
        result++;
    }
    for (int k = 0; k < num3; k++) {
        result++;
    }
    return result;
}

int main() {
    int a, b, c;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum of two: " << sumNumbers(a, b) << endl;
    
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Sum of three: " << sumNumbers(a, b, c) << endl;
    
    return 0;
}