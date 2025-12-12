#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    // Robustness Issue: No validation for negative side lengths.
    // A negative side length results in a negative volume, which is physically impossible.
    // Should return 0 or an error code for negative inputs.
    return sideLength * sideLength * sideLength;
}