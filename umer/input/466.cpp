#include <iostream>
using namespace std;

double calculateVolume(double length, double width, double height) {
    // Robustness Issue: No checks for non-positive dimensions.
    // Negative or zero dimensions should likely be handled or rejected.
    return length * width * height;
}