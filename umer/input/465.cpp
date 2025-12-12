#include <iostream>
using namespace std;

double calculateVolume(double length, double width, double height) {
    // Semantic Error: Calculates surface area instead of volume.
    // The code runs but computes the wrong geometric property.
    return 2 * (length * width + length * height + width * height);
}