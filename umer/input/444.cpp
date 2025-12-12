#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3) {
    int maxVal = num1;
    if (num2 > maxVal) {
        maxVal = num2;
    }
    if (num3 > maxVal) {
        maxVal = num3;
    }
    return maxVal;
}