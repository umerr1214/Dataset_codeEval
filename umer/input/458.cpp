#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    // Logical Error: Incorrect formula. Multiplies by 3 instead of cubing.
    // This calculates 3 * sideLength, not sideLength^3.
    return sideLength * 3;
}