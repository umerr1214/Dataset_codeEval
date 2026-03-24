#include <iostream>
using namespace std;

// Two-parameter version
int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Three-parameter version with semantic error
double findMax(int num1, int num2, int num3) { // Incorrect return type
    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}

int main() {
    int a = 5, b = 3, c = 8;
    cout << "Max of two: " << findMax(a, b) << endl;
    cout << "Max of three: " << findMax(a, b, c) << endl;
    return 0;
}