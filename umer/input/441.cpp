#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int num1, int num2, int num3) {
    // Semantic Error: This function actually finds the minimum value
    // despite the function name being findMax.
    int result = num1;
    if (num2 < result) {
        result = num2;
    }
    if (num3 < result) {
        result = num3;
    }
    return result;
}