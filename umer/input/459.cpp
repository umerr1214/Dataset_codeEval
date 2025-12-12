#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    // Semantic Error: Calculates the surface area of the cube (6 * side^2)
    // instead of the volume (side^3), but the code is syntactically valid.
    return 6 * sideLength * sideLength;
}