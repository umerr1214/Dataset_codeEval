#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3) {
    // Robustness Issue: Using strict inequality causes failure when the maximum values are equal.
    // If num1 and num2 are both max (e.g., 5, 5, 2), both conditions fail, returning num3 (2).
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3) {
        return num2;
    } else {
        return num3;
    }
}