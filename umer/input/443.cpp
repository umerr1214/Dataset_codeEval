#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3) {
    // Readability/Efficiency Issue: Excessive nesting makes the logic harder to follow.
    // While correct, a linear check or std::max would be much cleaner.
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        } else {
            return num3;
        }
    } else {
        if (num2 > num3) {
            return num2;
        } else {
            return num3;
        }
    }
}