#include <iostream>
using namespace std;

int sumNumbers(int num1, int num2) {
    return num1 - num2;  // Logical error: using subtraction instead of addition
}

int main() {
    int a = 5, b = 3;
    int result = sumNumbers(a, b);
    cout << "Sum: " << result << endl;
    return 0;
}