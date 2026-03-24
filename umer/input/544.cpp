#include <iostream>
using namespace std;

int sumNumbers(int num1, int num2) {
    // No input validation - robustness issue
    return num1 + num2;
}

int main() {
    int a = 5, b = 3;
    int result = sumNumbers(a, b);
    cout << "Sum: " << result << endl;
    return 0;
}