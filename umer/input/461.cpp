#include <iostream>
using namespace std;

double calculateVolume(double sideLength) {
    // Readability/Efficiency Issue: Using a loop to calculate the cube is unnecessary
    // and less efficient/readable than direct multiplication.
    double volume = 1;
    for (int i = 0; i < 3; i++) {
        volume = volume * sideLength;
    }
    return volume;
}