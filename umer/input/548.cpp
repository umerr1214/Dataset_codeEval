#include <iostream>
using namespace std;

// Two-parameter version
int sumNumbers(int num1, int num2) {
    return num1 + num2;
}

// Three-parameter version with logical error
int sumNumbers(int num1, int num2, int num3) {
    return num1 * num2 + num3;  // Logical error: using multiplication instead of addition
}

int main() {
    int a = 5, b = 3, c = 2;
    int result2 = sumNumbers(a, b);
    int result3 = sumNumbers(a, b, c);
    cout << "Sum of two: " << result2 << endl;
    cout << "Sum of three: " << result3 << endl;
    return 0;
}