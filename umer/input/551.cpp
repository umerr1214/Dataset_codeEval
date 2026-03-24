#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

// Two-parameter version
int sumNumbers(int num1, int num2) {
    return num1 + num2;
}

// Three-parameter version with readability/efficiency issues
int sumNumbers(int num1, int num2, int num3) {
    // Readability/Efficiency issue: unnecessary complexity and includes
    int temp1 = num1;
    int temp2 = num2;
    int temp3 = num3;
    int result = 0;
    
    // Overly complex way to add three numbers using loops
    for (int i = 0; i < abs(temp1); i++) {
        if (temp1 >= 0) {
            result = result + 1;
        } else {
            result = result - 1;
        }
    }
    for (int i = 0; i < abs(temp2); i++) {
        if (temp2 >= 0) {
            result = result + 1;
        } else {
            result = result - 1;
        }
    }
    for (int i = 0; i < abs(temp3); i++) {
        if (temp3 >= 0) {
            result = result + 1;
        } else {
            result = result - 1;
        }
    }
    
    return result;
}

int main() {
    int a = 5, b = 3, c = 2;
    int result2 = sumNumbers(a, b);
    int result3 = sumNumbers(a, b, c);
    cout << "Sum of two: " << result2 << endl;
    cout << "Sum of three: " << result3 << endl;
    return 0;
}