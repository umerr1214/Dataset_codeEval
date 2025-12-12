#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3) {
        return num2;
    }
    // Logical Error: Incorrectly defaults to returning num1 instead of checking num3
    // This fails if num3 is the actual maximum
    return num1;
}